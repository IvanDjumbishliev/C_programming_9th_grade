#include <stdio.h>
#include <string.h>

int strlength( char str[]) {
    printf("Length of string: %d\n", strlen(str));
}

int strconcat(char dest[],  char src[]) {
    strcat(dest, src);
}

int strcompare( char str1[],  char str2[]) {
    strcmp(str1, str2);
}

int main() {
    
    return 0;
}