#include <stdio.h>
#include <string.h>
#include "transformation.h"



int main () {
    struct Transformation result = transform("-123");
    printf("Result: %ld\n", result.result);
    printf("Error: %s\n", result.error);

    result = transform("abc");
    printf("Result: %ld\n", result.result);
    printf("Error: %s\n", result.error);

    return 0;
}