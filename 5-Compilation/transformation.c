#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "transformation.h"

struct Transformation transform (char string[]){
    struct Transformation result;
    result.result = 0;
    int size = strlen(string);

    
    int isValid = 1;
    for (int i = 0; i < size; i++) {
        if (i == 0 && (string[i] == '-' || string[i] == '+')) {
            continue;
        }
        if (string[i] < '0' || string[i] > '9') {
            isValid = 0;
            break;
        }
    }

    if (isValid) {
        strcpy(result.result, string);
        result.error[0] = '\0';
    } else {
        result.result = 0;
        strcpy(result.error, "Invalid input string");
    }


    return result;
}

