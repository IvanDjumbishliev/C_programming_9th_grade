#include <stdio.h>

//Да се състави програма, която да сортира даден масив възходящо и да намира сумата на елементите на масива, умножени по съответния индекс от сортирания масив. 
//Примерен вход: {1, 7, 3, 4, 9, 2} => След сортирането = {1, 2, 3, 4, 7, 9} => Изход: 93 = 1 * 0 + 2 * 1 + 3 * 2 + 4 * 3 + 7 * 4 + 9 * 5

 void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int sumOfElements(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i] * i;
    }
    return sum;
}

int main() {
    
    int arr[] = {1, 7, 3, 4, 9, 2};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, n);
    int result = sumOfElements(arr, n);

    printf("Sum of elements: %d\n", result);

    return 0;
}