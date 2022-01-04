/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 22 septembre 2021, 10:38
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv[]) {
    /*  int retour;
      retour=system("ls -l");
      if ( retour == -1){
          printf("pb avec l'appel de la fct system");
          exit(0);
      }
     */
    int pid1, pid2, pid3, pid4;
    //P1
    pid1 = fork();
    if (pid1 == 0) {//P3
       boite("boite3", "pid2=0");
        pid2 = fork();
        if (pid2 == 0) {
            
            pid3 = fork();
            if (pid3 == 0) {
                boite("boite2", "pid3=0");
            } else {
                pid3 = fork();
                if (pid3 == 0) {
                    boite("boite4", "pid3=0");
                } else {
                    boite("boite5", "pid3<>0");
                    pid4 = fork();
                    if (pid4 == 0) {
                        boite("boite6", "pid4=0");
                    } else {
                        boite("boite7", "pid4<>0");
                    }
                }
            }
        }else{//p3
            
        }
    }
    else{//p1
        boite("boite1", "pid1=0");
    }
    return EXIT_SUCCESS;
}

