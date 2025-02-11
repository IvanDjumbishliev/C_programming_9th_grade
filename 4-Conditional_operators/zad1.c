#include <stdio.h>

#define DEBUG

void sort_and_sum(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int sum = 0;
    printf("Elements at indices divisible by 3: ");
    for (int i = 0; i < size; i++) {
        if (i % 3 == 0) {
            sum += arr[i];
            printf("%d ", arr[i]);
        }
    }
    printf("\nSum: %d\n", sum);

#ifdef DEBUG
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
#endif
}

int main() {

    int arr[] = {5, 3, 2, 1, 4, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort_and_sum(arr, size);
    
    return 0;
}