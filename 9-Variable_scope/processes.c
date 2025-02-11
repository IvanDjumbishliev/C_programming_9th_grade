#include "processes.h"
#include <stdio.h>

extern int processCount = 0;

static int nextprocessid(){
    return (processCount + 1) > 5 ? 0 : processCount + 1;
}

static int creartenewprocess (char name[]){
    int id = nextprocessid();
    if (id == 0) {
        return 0; 
    }
    Process p = {id, name};
    processes[processCount++] = p;
    return id;
}

static int stopprocess(int id){
    if (id < 1 || id > 5) {
        return 0;
    }

    for (int i = 0; i < processCount; i++) {
        if (processes[i].id == id) {
            for (int j = i; j < processCount - 1; j++) {
                processes[j] = processes[j + 1];
            }
            processCount--;
            return 1;
        }
    }
    return 0;
}