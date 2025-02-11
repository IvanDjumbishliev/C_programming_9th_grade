#include "mystrings.h"
#include <string.h>

int main(int argc, char *argv[]){
    if(argc != 3){
        printf("Error: Please enter two strings to merge.\n");
        return 1;
    }

    int result = strcompare(argv[1], argv[2]);

    if(result == 0)
        printf("Strings are equal.\n");
    else if(result < 0)
        printf("The first string is smaller.\n");
    else 
        printf("The first string is greater.\n");
    
}