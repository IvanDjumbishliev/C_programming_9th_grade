#include <stdio.h>

#define SWAP(a, b, TYPE) { \
        TYPE temp = a; \
        a = b; \
        b = temp; \
    } 

#define SORT(ARRAY, SIZE, TYPE, COMPARE) \
   { \
        for (int i = 0; i < SIZE - 1; i++) { \
            for (int j = 0; j < SIZE - i - 1; j++) { \
                if (ARRAY[j] COMPARE ARRAY[j + 1]) { \
                    SWAP(ARRAY[j], ARRAY[j + 1], TYPE); \
                } \
            } \
        } \
    } 

int main() {
    int array[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);

    SORT(array, size, int, >);

    printf("Sorted array in ascending order: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    SORT(array, size, int, <);

    printf("Sorted array in descending order: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}