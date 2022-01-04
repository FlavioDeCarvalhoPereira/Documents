#include <stdio.h>
#include <stdlib.h>
// sockets
#include <sys/types.h>
#include <sys/socket.h>
// sockaddr_in
#include <netinet/in.h>
#include <arpa/inet.h>
// gestion erreur
#include <string.h>
#include <errno.h>
#include <unistd.h>
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
    
    struct sockaddr_in {
         sa_family_t sin_family;     /* famille d'adresses : AF_INET sur 16 bits */
        u_int16_t sin_port;         /* port dans l'ordre d'octets réseau */
        struct in_addr sin_addr;    /* adresse Internet */
        char sin_zero[8];           /* initialise à zéro */
    };

    struct in_addr {
        u_int32_t s_addr;   /* Adresse dans l'ordre d'octets réseau */
                    /* INADDR_ANY afin d'ecouter sur toutes */
                    /* les interface presentes */
    };
    
    int sockServeur;
    int valEnvoyer;
    int retour;
    struct sockaddr_in infosServeur;
    struct sockaddr_in infosClient;
    socklen_t tailleServeur = sizeof(infosServeur);
    //creation du socket tcp
    sockServeur = socket(PF_INET,SOCK_STREAM,IPPROTO_TCP);
    if (sockServeur == -1)
    {
        printf("pb socket : %s\n", strerror(errno));
        exit(errno);
    }
    
    // init dela structure pour communiquer avec le serveur
    
    infosServeur.sin_family = AF_INET;
    infosServeur.sin_port = htons(7777); // port dans ordre reseau
    infosServeur.sin_addr.s_addr = inet_addr("172.18.58.79");
    
    datePerso date;
    date.annee = 2001;
    date.jour = 11;
    date.mois = 9;
    strcpy(date.jourDeLaSemaine,"Samedi");
    
    retour = connect(sockServeur,(struct sockaddr*)&infosServeur, tailleServeur );
    if (retour == -1){
        printf("pb connect : %s\n", strerror(errno));
        exit(errno);
    }
    // envoyer l'entier au serveur
    
    valEnvoyer = 6.89;
    
    retour = write(sockServeur,(void *) &date, sizeof(date));
    if (retour == -1){
        printf("pb write : %s\n", strerror(errno));
        exit(errno);
    }
    
    // affiche l'entier
    return (EXIT_SUCCESS);
}
