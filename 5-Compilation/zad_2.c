#include <stdio.h>

int lcm (int a , int b) {
    int max = a > b ? a : b;
    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max++;
    }
}

int main() {
    int a = 3;
    int b = 4;
    int result = lcm(a, b);

    printf("The least common multiple of %d and %d is: %d\n", a, b, result);

    return 0;
}