#include <stdio.h>

#define SIZE 5
#define PRINT \
    for(int i = 0; i < SIZE; i++) {\
            printf("%d\n", arr[i]);\
        }

int main() {

    int arr[SIZE] = {1, 2, 3, 4, 5};

    PRINT
    
    return 0;
}