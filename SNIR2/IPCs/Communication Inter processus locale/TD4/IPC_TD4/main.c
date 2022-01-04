#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int main() {

    int tube[2];
    int tube2[2];
    int pid;
    char message[50];
    char messageRecu[50] = {0};
    float messageReal, messageRealRecu;
    //premier tube
    if (pipe(tube) == 0) {
        //deuxieme tube
        if (pipe(tube2) == 0) {
            //creation du P2
            pid = fork();
            if (pid == 0) //P2
            {
                read(tube[0], messageRecu, 50);
                printf("je suis le fils voici le message du pere : \n%s\n", messageRecu);

                messageReal = 3.14;
                write(tube2[1], &messageReal, sizeof (messageReal));
            } else //P1
            {
                strcpy(message, "je suis le message du pere");
                write(tube[1], message, strlen(message));
                
                read(tube2[0],&messageRealRecu,sizeof(messageRealRecu));
                printf("je suis le pere, voici le message du fils : %f\n",messageRealRecu);
            }
        }
    }

    return 0;
}