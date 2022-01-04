/*
 * Processus P1 
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

float randomF(){ 
	return ((float)100.0*(rand()/(RAND_MAX+0.1))); 
} 

int randomI(){ 
	return ((int)100.0*(rand()/(RAND_MAX+0.1))); 
} 

typedef struct {
    int press;
    float temp;
    char ordre;
} laStruct;

laStruct global;

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
        
    // ecriture en continu
    while(1){
        mesure->temp = randomF();
        mesure->press = randomI();
        printf("temp : %.2f \npress : %d\n",mesure->temp,mesure->press);
        sleep(1);
    }
    
    exit(EXIT_SUCCESS);
}
