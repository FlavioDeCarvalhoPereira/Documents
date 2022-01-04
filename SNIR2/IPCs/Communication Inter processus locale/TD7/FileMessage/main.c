/*
 * Processus P2
 */

#include "zone.h"


int main(int argc, char** argv) {

    struct donnees lesDonnees;
    int pression;
    float temp;
    
    key_t clef;
    int idFile;
     //creation de la zone mémoire partagée
    clef = ftok("/tmp/5678", 5678); // generation d'une clef
    //6 -> 110
    //     RWX
    idFile = msgget(clef,IPC_CREAT | 0600);//Autorisation en R/W (Read/ write)
    if (idFile ==-1){
        //le segment n'existe pas
        if(errno!=EEXIST)
        {
            printf("pb msgget : %s\n",strerror(errno));
            exit(errno);
            
        }
    }
    
    while(1){
        temp = randomF();
        pression = randomI();
        snprintf(lesDonnees.texte, 8, "%.2f",temp);
        lesDonnees.type = 2; //message de type 2
        msgsnd(idFile, (void*)&lesDonnees, sizeof(lesDonnees), IPC_NOWAIT);
        printf("type = %ld | data : %s\n",lesDonnees.type,lesDonnees.texte);
        snprintf(lesDonnees.texte, 8, "%d",pression);
        lesDonnees.type = 4; //message de type 2
        msgsnd(idFile, (void*)&lesDonnees, sizeof(lesDonnees), IPC_NOWAIT);
        printf("type = %ld | data : %s\n",lesDonnees.type,lesDonnees.texte);
        
        sleep(1);
    }
    return (EXIT_SUCCESS);
}


