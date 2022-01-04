#include "zone.h"

float randomF(){ 
	return ((float)100.0*(rand()/(RAND_MAX+0.1))); 
} 

int randomI(){ 
	return ((int)100.0*(rand()/(RAND_MAX+0.1))); 
} 

int main(int argc, char** argv) {
    
    struct donnees lesDonnees;
    
    key_t clef;
    int idFile;
    
    
    // obtention de la clé
    clef = ftok("/tmp/bidon", 5678);
    if (clef == -1){
        perror("probleme avec ftok\n");
        exit(2);
    }
    // obtention de la file
    idFile = msgget(clef, 0600 | IPC_CREAT);
    if (clef == -1){
        printf("probleme avec msgget : %s\n",strerror(errno));
        exit(errno);
    }
    // Pousser en continu des valeurs dans la file
    float temp;
    int press;
    
    while(1){
        temp = randomF();
        snprintf(lesDonnees.texte, 8, "%.2f",temp);
        lesDonnees.type = 2; // message de type 2
        msgsnd(idFile, (void *)&lesDonnees, sizeof(lesDonnees),IPC_NOWAIT);
        printf("type = %ld data = %s\n",lesDonnees.type,lesDonnees.texte );
        sleep(1);
        press = randomI();
        snprintf(lesDonnees.texte, 8, "%d",press);
        lesDonnees.type = 4; // message de type 2
        msgsnd(idFile, (void *)&lesDonnees, sizeof(lesDonnees),IPC_NOWAIT);
        printf("type = %ld data = %s\n",lesDonnees.type,lesDonnees.texte );
        sleep(1);
    }    
    
    exit(EXIT_SUCCESS);
}