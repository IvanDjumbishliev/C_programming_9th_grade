#include <stdio.h>

void different_sorts(int arr[], int size)   
{
    #ifdef _WIN32
        // Bubble sort
        int i, j, temp;
        for (i = 0; i < size - 1; i++) {
            for (j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    #elif defined __linux__
        // Selection sort
        int i, j, min_idx, temp;
        for (i = 0; i < size - 1; i++) {
            min_idx = i;
            for (j = i + 1; j < size; j++) {
                if (arr[j] < arr[min_idx]) {
                    min_idx = j;
                }
            }
            temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    #elif defined __APPLE__
        // Insertion sort
        int i, key, j;
        for (i = 1; i < size; i++) {
            key = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    #else
        // Reverse array
        int i, temp;
        for (i = 0; i < size / 2; i++) {
            temp = arr[i];
            arr[i] = arr[size - i - 1];
            arr[size - i - 1] = temp;
        }
    #endif
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    different_sorts(arr, size);

    printf("Sorted array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}