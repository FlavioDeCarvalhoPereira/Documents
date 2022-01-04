#include <stdio.h>
#include <stdlib.h>
// include pour socket
#include <sys/types.h>
#include <sys/socket.h>
// include pour sockaddr_in
#include <netinet/in.h>
#include <arpa/inet.h>
// gestion erreurs
#include <string.h>
#include <errno.h>

/*
 * 
 */
int main(int argc, char** argv) {
    typedef struct{
	unsigned char jour;
	unsigned char mois;
	unsigned short int annee;
	char jourDeLaSemaine[10];	// le jour en toute lettre
    }datePerso;
    
    int sock;
    int valEnvoyee, valRecue;
    int retour;
    struct sockaddr_in infosServeur;
    socklen_t taille;
    //création socket udp
    sock = socket(PF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (sock == -1) {
        printf("pb création socket : %s\n", strerror(errno));
        exit(errno);
    }
    //Init de la struct pour communiquer avec le serveur
    infosServeur.sin_family = AF_INET;
    //infosServeur.sin_port = htons(2222); // Port dans ordre serveur (host to network short)
    infosServeur.sin_addr.s_addr = inet_addr(argv[1]);
    //Init de la struct pour communiquer avec le serveur
    infosServeur.sin_port = htons(4444); // Port dans ordre serveur (host to network short)
    
    datePerso date;
    date.annee = 2001;
    date.jour = 11;
    date.mois = 9;
    strcpy(date.jourDeLaSemaine,"Samedi");
    
    //envoyer l'entier au serveur    
    retour = sendto(sock, &date, sizeof(date), 0, (struct sockaddr *)&infosServeur, sizeof(infosServeur));
    if(retour == -1){
        printf("pb sendto : %s\n", strerror(errno));
        exit(errno); 
    }
    return (EXIT_SUCCESS);
}