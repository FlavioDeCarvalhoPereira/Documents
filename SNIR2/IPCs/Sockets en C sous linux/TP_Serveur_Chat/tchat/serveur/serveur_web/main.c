#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <errno.h>
#include <string.h>

/*
 * 
 */
void service(int sockClient, struct sockaddr_in infosServeur);

int main(int argc, char** argv) {

    int sockServeur, sockClient;
    int retour;
    struct sockaddr_in infosServeur;
    struct sockaddr_in infosReception;
    int taille;
    int valeur;


    printf("serveur tcp sur le port 8888\n");

    sockServeur = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (sockServeur == -1) {
        printf("pb socket : %s\n", strerror(errno));
        exit(1);
    }

    infosServeur.sin_family = AF_INET;
    infosServeur.sin_port = htons(8888);
    infosServeur.sin_addr.s_addr = htonl(INADDR_ANY);

    retour = bind(sockServeur, (struct sockaddr *) &infosServeur, sizeof (infosServeur));

    if (retour == -1) {
        printf("pb bind : %s\n", strerror(errno));
        exit(2);
    }

    retour = listen(sockServeur, 10); // 10 clients maxi en file d'attente
    if (retour == -1) {
        printf("pb listen : %s\n", strerror(errno));
        exit(3);
    }
    taille = sizeof (infosReception);

    while (1) {
        

        sockClient = accept(sockServeur, (struct sockaddr *) &infosReception, &taille);

        service(sockClient, infosReception);
    }

    return (EXIT_SUCCESS);
}

void service(int sockClient, struct sockaddr_in infosReception) {
    char requete[512];
    int retour;
    char reponse[2048] = "index.html";
    char complet[4096];
    
    retour = read(sockClient,requete,512);
    if (retour == -1) {
        printf("pb read : %s\n", strerror(errno));
        exit(3);
    }
    
    char * mot[10];
    mot[0] = strtok(requete, " \t\n");
    mot[1] = strtok(NULL, " \t\n");
    mot[2] = strtok(NULL, " \t\n");
    
    printf("requete du client  %s\n",mot[0]);
    printf("fichier  %s\n",mot[1]);
    printf("protocol  %s\n",mot[2]);
    
    
    // lecture reponse du fichier
    
    FILE * frep = fopen(mot[1]+1,"r");
    if (frep == NULL) {
        printf("pb fopen : %s\n", strerror(errno));
        retour=write(sockClient,"HTTP/1.0 404 Bad Request \nContent-length : test/html\n\n",69);
        
    }else{
        
    
    retour = fread(reponse,2048,sizeof(reponse),frep);
    
            
    fclose(frep);
    
    sprintf(complet,"HTTP/1.1 200 OK\nContent-lenght: %d\n\n",strlen(reponse));
    strncat(complet,reponse ,1024);
    printf("%s",complet);

    retour = write(sockClient,complet,strlen(complet));
    }
    shutdown(sockClient,SHUT_RDWR);
    close(sockClient);
};