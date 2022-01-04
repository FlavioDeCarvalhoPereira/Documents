/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   zone.h
 * Author: bneveu
 *
 * Created on 7 octobre 2021, 15:33
 */

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

#ifdef __cplusplus
extern "C" {
#endif

    struct donnees {
        long type;
        char texte[9];
    };


#ifdef __cplusplus
}
#endif

#endif /* ZONE_H */
