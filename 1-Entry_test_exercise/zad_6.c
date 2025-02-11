#include <stdio.h>


//Да се направи рекурсивна функцията, която преобразува дадено десетично число в двоично и го връща като целочислено число.
//Примерен вход: 10 => Изход 1010. Хубаво е функцията да връща тип “long”, защото двоичните числа могат да имат много цифри. 

long DecimalToBinary(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 2 + 10 * DecimalToBinary(n / 2);
}

int main() {
    
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Binary: %ld\n", DecimalToBinary(n));
    
    return 0;
}