#include <stdio.h>
#include "processes.h"

int menu(){
    extern int option;
    printf("1. Create new process\n");
    printf("2. Stop process\n");
    printf("3. Exit\n");
    printf("Option: ");
    scanf("%d", &option);
    return option;
}

int main (void){
    menu();

    while(1){
        switch(option){
            case 1: 
                {
                    if (processCount >= 5) {
                        printf("Error: Maximum number of running processes reached. Stop a process to create a new one.\n");
                    } else {
                        char name[30];
                        printf("Enter process name: ");
                        scanf("%s", name);
                        createnewprocess(name);
                    }
                    break;
                }
            case 2:
                {
                    for (int i = 0; i < processCount; i++) {
                        printf("Process %d: %s\n", processes[i].id, processes[i].name);
                    }
                    break;
                }
            case 3:
                {
                    printf("Stopping process...\n");
                    printf ("Enter process id: ");
                    int id;
                    scanf("%d", &id);
                    stopprocess(id);
                    break;
                }
            case 4:
                {
                    printf("Exiting...\n");
                    return 0;
                    break;
                }
        }
    }
    return 0;
}