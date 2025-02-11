#include <stdio.h>
#include <math.h>

void replace(long arr[], int size){
    for(int i = 0; i < size; i++){
            arr[i] = pow(arr[i], 4);
    }
}

void printArr(long arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%ld ", arr[i]);
    }
}

int main() {
    long arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    replace(arr, size);
    printArr(arr, size);
    
    return 0;
}