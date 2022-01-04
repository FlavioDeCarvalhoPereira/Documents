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

int main(int argc, char** argv) {
    int sock;
    int valEnvoye,valRecue;
    int retour;
    struct sockaddr_in infosServeur;
    struct sockaddr_in infosClient;
    socklen_t taille;
    
    printf("serveur UDP sur le port 2222 attend un ENTIER\n");
    sock=socket(PF_INET,SOCK_DGRAM,IPPROTO_UDP);
    if (sock==-1){
        
        printf("pb socket : %s\n",strerror(errno));
        exit(errno);
    }
    infosServeur.sin_family=AF_INET;
    infosServeur.sin_port=htons(2222);
    infosServeur.sin_addr.s_addr=inet_addr("172.18.58.79");

    retour=bind(sock,(struct sockaddr *)&infosServeur,sizeof(infosServeur));
    if (retour==-1){
        
        printf("pb bind : %s\n",strerror(errno));
        exit(errno);
    }
    
    while(1){
        taille=sizeof(infosClient); // etre sure de la taille souvent recvfrom la met mal à jour
  retour= recvfrom(sock,&valRecue,sizeof(valRecue),0,(struct sockaddr *)&infosClient,&taille);
    if(retour == -1){
        printf("pb reception : %s\n",strerror(errno));
        exit(errno);
    }
    printf("Message recu du client : %s -> %d\n",inet_ntoa(infosClient.sin_addr),valRecue);
    valEnvoye=valRecue*-1;
    
         
    retour=sendto(sock,&valEnvoye,sizeof(valEnvoye),0,(struct sockaddr *)&infosClient,sizeof(infosClient));
    if(retour == -1){
        printf("pb envoie : %s\n",strerror(errno));
        exit(errno);
    }
     }
    return (EXIT_SUCCESS);
}
