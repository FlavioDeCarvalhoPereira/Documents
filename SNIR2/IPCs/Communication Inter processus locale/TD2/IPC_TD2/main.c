#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
    /*
    int pid1, pid2;
    char message[255];
    pid1 = fork();
    if (pid1 == 0) {
        sprintf(message, "mon pid est %d, le pid de mon pere est %d", getpid(), getppid());
        boite("boite1", message);
        pid2 = fork();
        if (pid2 == 0) {
            sprintf(message, "mon pid est %d, le pid de mon pere est %d", getpid(), getppid());
            boite("boite2", message);
        } else {
            sprintf(message, "mon pid est %d, le pid de mon pere est %d", getpid(), getppid());
            boite("boite3", message);
        }
    } else {
        sprintf(message, "mon pid est %d, le pid de mon pere est %d", getpid(), getppid());
        boite("boite4", message);
    }
     */
    /*
        int pid1;
        pid_t retourWait;
        int wstatus;
        char message[255];
        //P1
        pid1 = fork();
        if (pid1 > 0) // P1
        {
            pid1 = fork();
            if (pid1 > 0) // P1
            {
            
                sprintf(message, "mon pid est %d, le pid de mon pere est %d", getpid(), getppid());
                boite("boite1", message);

            } else {  //P3
                sprintf(message, "mon pid est %d, le pid de mon pere est %d", getpid(), getppid());
                boite("boite3", message);
            }
        } else { // P2
            sprintf(message, "mon pid est %d, le pid de mon pere est %d", getpid(), getppid());
            boite("boite2", message);

        }
     */
    /*   
       int pid1, pid2;
       char message[255];
       pid_t retourWait;
       int wstatus;
       //p1
       pid1 = fork();
       if (pid1 == 0) { //p2
           sprintf(message, "mon pid est %d, le pid de mon pere est %d", getpid(), getppid());
           boite("P2", message);

       } else //p1
       {
           pid2 = fork();
           if (pid2 == 0) { //p3
            
               sprintf(message, "mon pid est %d, le pid de mon pere est %d", getpid(), getppid());
               boite("P3", message);
           } else { //P1
               retourWait=wait(&wstatus); // attend la mort d'un fils
               retourWait=wait(&wstatus); // attend la mort d'un second fils
               sprintf(message, "mon pid est %d, le pid de mon pere est %d, process file dead %d", getpid(), getppid(),retourWait);
               boite("P1", message);
           }
       }
     */
    int pid1, pid2;
    char message[255];
    pid_t retourWait;
    int wstatus;

    //p1
    pid1 = fork();
    if (pid1 == 0) { //p2
        retourWait = waitpid(getppid(),&wstatus,0); // attend la mort du pere
        sprintf(message, "mon pid est %d, le pid de mon pere est %d", getpid(), getppid(), retourWait);
        boite("P2", message);

    } else {//p1

    sprintf(message, "mon pid est %d, le pid de mon pere est %d", getpid(), getppid());
    boite("P1", message);
    }

        return EXIT_SUCCESS;
    }