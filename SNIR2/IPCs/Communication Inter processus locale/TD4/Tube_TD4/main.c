#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <bits/signum-generic.h>
#include <sys/wait.h>

#define MAXBUFF 255

void traitement(int sig) {
    //(void) signal(SIGUSR1, traitement);
    static int cpt = 0;
    cpt++;
    printf("cpt : %d | signal %d recu par le processus  %d\n", cpt, sig, getppid());
}

int main() {
    // Question 1
    /*
    FILE *fd;
    char *retourLecture;
    char buffer[MAXBUFF];
    memset(buffer,'\0',MAXBUFF);
    // invocation d'un programme externe et mise dans un tube popen du resultat sous forme de chaine de caracteres
    // le tube popen sera en lecture (car on veut lire ce qu'a produit le programme externe
    fd=popen("/bin/uname","r");
    if(fd==NULL){
        printf(" pb popen : %s\n",strerror(errno));
        exit(1);
    }
    //lecture de la chaine genere par le programme invoque par popen (-> /bin/uname)
    retourLecture=fgets(buffer,MAXBUFF,fd);
    if (retourLecture==NULL)
    {
        printf("pb lecture popen\n");
        exit(1);
    }
    // fermeture du tube
    pclose(fd);
    // affichage de ce qu'a produit "/bin/uname"
    printf("le process a ecrit : [%s]\n",buffer);
    
    return 0;
     */
    // Question 2

    /*
    int nb;
    int pipefd[2];
    int pipert[2];
    char chaine[] = "123456798";
    char chaines[] = "987654321";
    int pid;
    int wstatus;
    int status;
    int status2;
    char buffer[MAXBUFF];
    memset(buffer, '\0', MAXBUFF);

    status = pipe(pipefd);
    if (status != 0) {
        printf("PB pipe");
        exit(1);
    }
    status2 = pipe(pipert);
    if (status2 != 0) {
        printf("PB pipe");
        exit(1);
    }


    if (pipe(pipefd) == 0) {
        pid = fork(); // duplication du processus

        if (pid == -1) { // oups un probleme
            fprintf(stderr, "Pb de fork");
            exit(EXIT_FAILURE);
        } else // fork ok
 {
            if (pid == 0) { // je suis dans le process pere
                sleep(2);
                nb = read(pipefd[0], buffer, BUFSIZ);
                printf("processus %d | octets lus: %d: %s\n", getpid(), nb, buffer);

                nb = write(pipert[1], chaines, strlen(chaines));
            } else //je suis dans le process fils
            {
                nb = write(pipefd[1], chaine, strlen(chaine));
                nb = read(pipert[0], buffer, BUFSIZ);
                printf("processus %d | octets lus: %d: %s\n", getpid(), nb, buffer);
                wait(&wstatus);
            }
        }

    }
    return 0;
     */

    //Question 4

    int nb;
    int pipefd[2];
    char chaine[255];
    int wstatus;
    int status;
    char buffer[MAXBUFF];
    memset(buffer, '\0', MAXBUFF);

    pid_t pid1;
    pid_t pid2;
    pid_t pid3;
    int retour, retour2;



    (void) signal(SIGUSR1, traitement);

    pid1 = getpid();
    printf("Pere P1 pid = %d\n\n", pid1);

    status = pipe(pipefd);
    if (status != 0) {
        printf("PB pipe");
        exit(1);
    }

    pid2 = fork();

    if (pid2 == 0) {
        pid3 = fork();
        if (pid3 == 0) {// Enfant P3
            printf("Enfant p3 pid %d ppid %d\n", getpid(), getppid());
            
            printf("Le processus P3 attend un signal\n\n");
            pause();
            sprintf(chaine, "Mon PID est %d", getpid());
            nb = write(pipefd[1], chaine, strlen(chaine));
            printf("Fin de processus P3\n\n");
            

        } else {
            // Enfant P2
            printf("Enfant P2 pid %d ppid %d\n", getpid(), getppid());
            printf("Le processus P2 attend un signal\n\n");
            pause();
            wait(&wstatus);
            printf("Fin de processus P2\n\n");
           
        }
    } else {
        sleep(1);
        printf("P1 envoie un signal USR1 à P2\n");
        retour = kill(pid1, SIGUSR1);
        if (retour != 0) {
            printf("Erreur avec kill");
        }
        sleep(1);
        printf("P1 envoie un signal USR1 à P3\n");
        retour2 = kill(pid2, SIGUSR1);
        /*if (retour != 0) {
            printf("Erreur avec kill");
        }*/
        sleep(1);
        nb = read(pipefd[0], buffer, MAXBUFF);
        printf("processus %d | octets lus: %d: %s\n", getpid(), nb, buffer);

        printf("Fin de processus P1\n");
        wait(&wstatus);
    }
}
