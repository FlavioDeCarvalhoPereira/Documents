/*
 * Client tchat 1
 */

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

    struct sockaddr_in {
        sa_family_t sin_family; /* famille d'adresses : AF_INET sur 16 bits */
        u_int16_t sin_port; /* port dans l'ordre d'octets réseau */
        struct in_addr sin_addr; /* adresse Internet */
        char sin_zero[8]; /* initialise à zéro */
    };

    struct in_addr {
        u_int32_t s_addr; /* Adresse dans l'ordre d'octets réseau */
        /* INADDR_ANY afin d'ecouter sur toutes */
        /* les interface presentes */
    };

    int sockServeur;
    int retour;
    struct sockaddr_in infosServeur;
    socklen_t tailleServeur = sizeof (infosServeur);
    char valClient[255];

    int pid1;

    //creation du socket TPC

    sockServeur = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (sockServeur == -1) {
        printf("pb socket : %s\n", strerror(errno));
        exit(errno);
    }

    // init dela structure pour communiquer avec le serveur

    infosServeur.sin_family = AF_INET;
    infosServeur.sin_port = htons(8888); // port dans ordre reseau
    infosServeur.sin_addr.s_addr = inet_addr("172.18.58.71");

    // connection
    printf("Client : ");

    retour = connect(sockServeur, (struct sockaddr*) &infosServeur, tailleServeur);
    if (retour == -1) {
        printf("pb connect : %s\n", strerror(errno));
        exit(errno);
    }

    printf("Connexion REUSSSI\n\n");

    pid1 = fork();

    while (1) {
        
        if (pid1 == 0) //p1
        {
            // envoyer char au serveur
            do {
                gets(valClient);
                printf("\n");
            } while (strlen(valClient) == 0);
            


            retour = write(sockServeur, (void *) &valClient, sizeof (valClient));
            if (retour == -1) {
                printf("pb write : %s\n", strerror(errno));
                exit(errno);
            }
        } else {

            retour = read(sockServeur, (void *) &valClient, sizeof (valClient));
            if (retour == -1) {
                printf("pb read : %s\n", strerror(errno));
                exit(errno);
            }
            
            printf("\nMessage reçu de %s      : %s\n",
                    inet_ntoa(infosServeur.sin_addr),
                    valClient);
            
        }


    }

    return (EXIT_SUCCESS);
}
