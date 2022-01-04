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


int main(int argc, char** argv) {
    int sockFileAttente;
    int socketCommunicationClient;
    int valEnvoyee, valRecu;
    int retour;
    struct sockaddr_in infosServeur;
    struct sockaddr_in infosClient;
    int tailleClient;
    socklen_t taille;

    printf("serveur UDP sur le port 5555 attend un ENTIER\n");
    //creation de la socket
    sockFileAttente = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (sockFileAttente == -1) {
        printf("pb socket : %s\n", strerror(errno));
        exit(errno);
    }
    //init de la structure pour communiquer avec le serveur
    
    infosServeur.sin_family = AF_INET;
    infosServeur.sin_port = htons(5555); //port dans ordre reseau
    infosServeur.sin_addr.s_addr = htons(INADDR_ANY);
    

    // Associer l'adresse IP et le nro de port
    retour = bind(sockFileAttente, (struct sockaddr *)&infosServeur, sizeof (infosServeur));
    if (retour == -1) {
        printf("pb bind : %s\n", strerror(errno));
        exit(errno);
    }
    while(1){
        //Listen
        retour=listen(sockFileAttente,20);   
        if (retour == -1) {
            printf("pb listen : %s\n", strerror(errno));
            exit(errno);
        }
        //accept
    
        tailleClient = sizeof(infosClient);
        socketCommunicationClient = accept(sockFileAttente, (struct sockaddr *)&infosClient, &tailleClient);
        if (socketCommunicationClient == -1) {
            printf("pb accept : %s\n", strerror(errno));
            exit(errno);
        }

        //recevoir l'entier en provenance du client
        retour = read(socketCommunicationClient, (void*)&valRecu, sizeof(valRecu));
        if (retour == -1) {
            printf("pb read : %s\n", strerror(errno));
            exit(errno);
        }
    
        printf("Message reçu du client %s : %d -> %d\n",
                inet_ntoa(infosClient.sin_addr),infosClient.sin_port,valRecu);
        
        //renvoyer un entier au client
        valRecu = -valRecu;
        retour=write(socketCommunicationClient,(void*)&valRecu,sizeof(valRecu));
        if (retour == -1) {
            printf("pb write : %s\n", strerror(errno));
            exit(errno);
        }
    
        
    }
    return (EXIT_SUCCESS);
}
