#include <stdio.h>

//Да се състави програма, която да връща произведението на цифрите на дадено число. Примерен вход: 417 => Изход: 28 = 4 * 1 * 7;

int ProductOfDigits(int n) {
    int product = 1;
    while (n != 0) {
        product *= n % 10;
        n /= 10;
    }
    return product;
}

int main() {
    
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Product of digits: %d\n", ProductOfDigits(n));
    
    return 0;
}