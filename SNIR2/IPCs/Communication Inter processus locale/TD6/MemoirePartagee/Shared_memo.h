#ifndef SHARED_MEMO_H
#define SHARED_MEMO_H

#include <sys/types.h> 
#include <sys/shm.h> 
#include <sys/ipc.h> 
#include <errno.h> 
#include <time.h> 
#include <unistd.h> 
#include <stdlib.h> 
#include <stdio.h>

typedef struct {
    int press;
    float temp;
    char ordre;
} laStruct;

    
    float randomF();
    int randomI();





#endif /* SHARED_MEMO_H */
