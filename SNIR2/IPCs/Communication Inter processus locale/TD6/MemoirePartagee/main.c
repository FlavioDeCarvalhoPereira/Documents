#include <sys/types.h> 
#include <sys/shm.h> 
#include <sys/ipc.h> 
#include <errno.h> 
#include <time.h> 
#include <unistd.h> 
#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
#include "Shared_memo.h"


laStruct global;

int main(int argc, char** argv) {
    
    laStruct mesure;
    mesure.temp = randomF();
    mesure.press = randomI();

    key_t clef;
    int id;
    //creation de la zone mémoire partagée
    clef = ftok("/tmp/1234", 1234); // generation d'une clef
    //6 -> 110
    //     RWX
    id = shmget(clef, sizeof (mesure),IPC_CREAT | 0600);//Autorisation en R/W (Read/ write)
    if (id==-1)
    {
        //le segment n'existe pas
        if(errno!=EEXIST)
        {
            printf("pb shmget : %s\n",strerror(errno));
            exit(errno);
            
        }
    }
    //attribution adresse virtuelle du segment 
    
    //lecture et affichage de la zone partagee
    
    
    exit(EXIT_SUCCESS);
}
