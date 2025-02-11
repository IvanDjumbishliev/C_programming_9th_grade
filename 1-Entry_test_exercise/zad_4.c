#include <stdio.h>

int BinarySearch(int arr[], int n, int number) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == number) {
            return mid;
        }
        if (arr[mid] < number) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 5, 7, 8, 10};

    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Enter a number to search: ");
    int number;
    scanf("%d", &number);

    int result = BinarySearch(arr, n, number);
    printf("Index of %d: %d\n", number, result);
    return 0;
}