#ifndef __MAIN
#define __MAIN

#include <unistd.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <pthread.h>
#include <signal.h>

#include "stand.h"
#include "semaphore.c"
#include "system.h"
#include "voiture.h"
#include "circuit.h"
#include "equipe.h"

typedef struct Stand Stand;
typedef struct Equipe Equipe;
typedef struct Circuit Circuit;
typedef struct Voiture Voiture;

void signalSIGINT(int num); 
void killThread();
void freeMain();
void* run(void* arg);
int main(int argc, char** argv);
#endif

