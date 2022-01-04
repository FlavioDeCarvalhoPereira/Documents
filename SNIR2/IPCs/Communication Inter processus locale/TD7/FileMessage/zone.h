
#ifndef ZONE_H
#define ZONE_H

#include <sys/types.h> 
#include <sys/shm.h> 
#include <sys/ipc.h> 
#include <errno.h> 
#include <time.h> 
#include <unistd.h> 
#include <stdlib.h> 
#include <stdio.h>
#include <string.h> 
#include <sys/msg.h>

struct donnees{
	long type;
	char texte[9];
};

float randomF();
int randomI();

typedef struct {
    int pression;
    float temp;
    char ordre;
} laStruct;


#endif /* ZONE_H */
