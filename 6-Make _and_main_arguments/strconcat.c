#include <string.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error: Please enter two strings to merge.\n");
        return 1;
    }

    if (strlen(argv[1]) > 50 || strlen(argv[2]) > 50) {
        printf("Error: The maximum length of both strings must not exceed 50 characters.\n");
        return 1;
    }

    strconcat(argv[1], argv[2]);
    printf("A concatenated string: %s\n", argv[1]);
    return 0;
}