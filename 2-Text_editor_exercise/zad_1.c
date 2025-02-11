#include <stdio.h>

void bubbleSort(int arr[], int size){
    int sotred = 0;
    for(int i = 0; i < size - 1 && !sotred; i++){
        sotred = 1;
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                sotred = 0;
            }
        }
    }
}

int main() {

    int arr[5] = {4, 1, 7, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    bubbleSort(arr, size);

    
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}