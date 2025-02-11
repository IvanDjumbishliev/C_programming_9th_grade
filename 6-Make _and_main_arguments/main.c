#include <stdio.h>
#include <string.h>

int strlength(char str[]) {
    return strlen(str);
}

void strconcat(char dest[], char src[]) {
    strcat(dest, src);
}

int strcompare(char str1[], char str2[]) {
    return strcmp(str1, str2);
}

void print_help() {
    printf("Helping menu:\n");
    printf("1. strlength: finds the length of a character string.\n");
    printf("2. strconcat: concatenates two character strings.\n");
    printf("3. strcompare: compares two character strings.\n");
}

int main() {
    print_help();
    return 0;
}
