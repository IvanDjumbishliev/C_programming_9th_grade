#include <stdio.h>

#define DEBUG_INT(X)   \
        printf("The value of " #X " is %d\n", X);\
        printf("File: %s\n", __FILE__);\
        printf("Line: %d\n", __LINE__);



int main() {

    int something = 5;
    DEBUG_INT(something);
    
    return 0;
}
