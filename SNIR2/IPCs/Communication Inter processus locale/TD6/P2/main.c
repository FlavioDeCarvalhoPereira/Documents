/*
 * Processus P2
 */


#include <sys/types.h> 
#include <sys/shm.h> 
#include <sys/ipc.h> 
#include <errno.h> 
#include <time.h> 
#include <unistd.h> 
#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
#include <ncurses.h>


int randomC(){ 
	return ((char)('A'+((char)(25.0*(rand()/(RAND_MAX+0.1)))))); 
} 

typedef struct {
    int press;
    float temp;
    char ordre;
} laStruct;

int main(int argc, char** argv) {

    laStruct *mesure;
    
    key_t clef;
    int id;
     //creation de la zone mémoire partagée
    clef = ftok("/tmp/1234", 1234); // generation d'une clef
    //6 -> 110
    //     RWX
    id = shmget(clef, sizeof (laStruct),IPC_CREAT | 0600);//Autorisation en R/W (Read/ write)
    if (id==-1){
        //le segment n'existe pas
        if(errno!=EEXIST)
        {
            printf("pb shmget : %s\n",strerror(errno));
            exit(errno);
            
        }
    }
    // attribution
    mesure = (struct laStruct *) shmat(id,NULL,SHM_W) ;
    if(mesure == NULL){
        perror("pb shmat\n");
        exit(1);
    }
    while(1){
        mesure->ordre = randomC();
        printf("ordre : %c\n",mesure->ordre);
        sleep(1);
    }
    return (EXIT_SUCCESS);
}

