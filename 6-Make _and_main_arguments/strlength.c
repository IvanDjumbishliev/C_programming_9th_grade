#include "mystrings.h"
#include <string.h>

int main(int argc, char argv[]) {
    if (argc != 2) {
        printf("Error: please enter only one string.\n");
        return 1;
    }

    printf("The string length is: %d\n", strlength(argv[1]));
    return 0;
}
