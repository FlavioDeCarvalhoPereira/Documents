#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <sys/syscall.h>
#include <signal.h>

#define TAILLE_MAX_MSG 255
#define TAILLE_MAX_PSEUDO 25

typedef struct {
    char pseudo[TAILLE_MAX_PSEUDO];
    char texteMessage[TAILLE_MAX_MSG];

} message;

int main(int argc, char** argv) {
    int fdSocket;
    struct sockaddr_in informationDuServeur;
    int retour;
    char msgEnvoye[TAILLE_MAX_MSG];
    char msgRecu[TAILLE_MAX_MSG];
    int pid;
    message message;

    if (argc != 2) {
        printf("Usage : %s IpDuServeur\n", argv[0]);
        exit(EXIT_SUCCESS);
    }
    printf("client de tchat tcp port 5678\n");
    informationDuServeur.sin_family = AF_INET;
    informationDuServeur.sin_port = htons(5678);
    informationDuServeur.sin_addr.s_addr = inet_addr("172.18.58.83");

    fdSocket = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (fdSocket == -1) {
        printf("pb socket : %s\n", strerror(errno));
        exit(errno);
    }
    //demande de connexion au serveur
    retour = connect(fdSocket, (struct sockaddr *) &informationDuServeur,
            sizeof (informationDuServeur));
    if (retour == -1) {
        printf("pb connect : %s\n", strerror(errno));
        exit(errno);
    }
    pid = fork();
    if (pid == 0) // boucle d'envois
    {
        do {
            printf("votre message : ");
            gets(msgEnvoye);
            // envoyer l'entier au serveur
            strcpy(message.pseudo, "fpereira");
            strcpy(message.texteMessage, msgEnvoye);
            retour = write(fdSocket, (void *) &message, sizeof (message)); //write(fdSocket,msgEnvoye, strlen(msgEnvoye))
            if (retour == -1) {
                printf("pb write : %s\n", strerror(errno));
                exit(errno);
            }
        } while (strcmp("quit", msgEnvoye) != 0);
        // arreter le processus de reception
        kill(getppid(), SIGTERM);
        close(fdSocket);
    } else { // boucle de reception
        while (1) {
            // reception en provenance du serveur
            memset(msgRecu, '\0', TAILLE_MAX_MSG);
            retour = read(fdSocket, msgRecu, TAILLE_MAX_MSG);
            if (retour == -1) {
                printf("pb read : %s\n", strerror(errno));
                exit(errno);
            }
            if (strcmp("quit", msgEnvoye) != 0) {
                printf("\nmsg provenant du serveur :%s\n", msgRecu);
            }
        }
    }
    return (EXIT_SUCCESS);
}