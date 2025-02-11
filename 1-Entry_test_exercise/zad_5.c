#include <stdio.h>

//Да се направи функция, която приема произволен символен низ и да връща символът от него, който има най-голям ASCII код.
// Примерен вход: “Ivan” => Изход: ‘v’.

void BiggestASCIIChar(char str[]) {
    char biggest = str[0];
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] > biggest) {
            biggest = str[i];
        }
    }
    printf("Biggest ASCII char: %c\n", biggest);
}

int main() {
    
    char str[] = "Ivan";
    BiggestASCIIChar(str);
    
    return 0;
}