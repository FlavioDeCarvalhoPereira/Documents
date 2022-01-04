#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>

#include <string.h>
#include <errno.h>

#include <netinet/in.h>
#include <arpa/inet.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int sock;
    float valEnvoyee, valRecue;
    int retour;
    struct sockaddr_in infosServeur;
    struct sockaddr_in infosReception;
    socklen_t taille;
    
    sock = socket(PF_INET, SOCK_DGRAM, 0);
    if (sock == -1) {

        printf("pb socket : %s\n", strerror(errno));
        exit(errno);
    }
    infosServeur.sin_family = AF_INET;
    infosServeur.sin_port = htons(3333);
    infosServeur.sin_addr.s_addr = inet_addr("172.18.58.83");
    valEnvoyee = 3.697;
    retour = sendto(sock,
            &valEnvoyee, 
            sizeof (valEnvoyee), 
            0,
            (struct sockaddr *) &infosServeur, 
            sizeof (infosServeur));
    
    if (retour == -1) {
        printf("pb envoie : %s\n", strerror(errno));
        exit(errno);
    }
    retour = recvfrom(sock,
            &valRecue,
            sizeof(valRecue),
            0,
            (struct sockaddr *)&infosReception,
            &taille);
    
    if (retour == -1) {
        printf("pb recvfrom : %s\n", strerror(errno));
        exit(errno);
    }
    
    printf("%f", valRecue);
    return (EXIT_SUCCESS);
}

