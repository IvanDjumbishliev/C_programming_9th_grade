#ifndef PROCESSES_H_
#define PROCESSES_H_

typedef struct Process{
    int id;
    char name[30];
} Process;

extern Process processes[5];
extern int processCount;

static int nextprocessid();
static int creartenewprocess (char name[]);
static int stopprocess(int id);

#endif