#include <stdio.h>

// Да се състави програма, която да намира сумата на простите числа в даден масив (1 не се смята за просто число). 
//Примерен вход: {1, 7, 10, 15, 16, 13, 23, 30} => Изход: 43 = 7 + 13 + 23

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int arr[] = {1, 7, 10, 15, 16, 13, 23, 30};
    int sum = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (is_prime(arr[i])) {
            sum += arr[i];
        }
    }
    printf("Sum of prime numbers: %d\n", sum);
    return 0;
}