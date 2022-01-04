#include <stdio.h>
#include <stdlib.h>
//include pour socket
#include <sys/types.h>
#include <sys/socket.h>
//include pour stockaddr_in
#include <netinet/in.h>
#include <arpa/inet.h>
//include gestion erreurs
#include <string.h>
#include <errno.h>

typedef struct {
    unsigned char jour;
    unsigned char mois;
    unsigned short int annee;
    char jourDeLaSemaine[10]; // le jour en toute lettre
} datePerso;

int main(int argc, char** argv) {
    int sockFileAttente, socketComClient;
    int retour;
    struct sockaddr_in infosServeur;
    struct sockaddr_in infosClient; 
    socklen_t tailleClient = sizeof(infosClient);
    datePerso date;

    printf("serveur UDP sur le port 7777 attend une Date\n");
    
    //creation de la socket
    sockFileAttente = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (sockFileAttente == -1) {
        printf("pb socket : %s\n", strerror(errno));
        exit(errno);
    }
    //init de la structure pour communiquer avec le serveur
    
    infosServeur.sin_family = AF_INET;
    infosServeur.sin_port = htons(7777); //port dans ordre reseau
    infosServeur.sin_addr.s_addr = htons(INADDR_ANY);
    

    // Associer l'adresse IP et le nro de port
    retour = bind(sockFileAttente, (struct sockaddr *)&infosServeur, sizeof (infosServeur));
    if (retour == -1) {
        printf("pb bind : %s\n", strerror(errno));
        exit(errno);
    }
    
    while(1){
        //Listen
        retour = listen(sockFileAttente,10);   
        if (retour == -1) {
            printf("pb listen : %s\n", strerror(errno));
            exit(errno);
        }
        
        //accept   
        socketComClient = accept(sockFileAttente, (struct sockaddr *)&infosClient, &tailleClient);
        if (socketComClient == -1) {
            printf("pb accept : %s\n", strerror(errno));
            exit(errno);
        }

        //recevoir l'entier en provenance du client
        retour = read(socketComClient, (void*)&date, sizeof(date));
        if (retour == -1) {
            printf("pb read : %s\n", strerror(errno));
            exit(errno);
        }
        printf("Message reçu du client %s:%d ->\n %s %d/%d/%d \n",
            inet_ntoa(infosClient.sin_addr), infosClient.sin_port,
                date.jourDeLaSemaine, date.jour, date.mois, date.annee);
    
        //renvoyer un entier au client
         
    }
    return (EXIT_SUCCESS);
}
