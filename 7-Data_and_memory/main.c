#include <stdio.h>
#include <limits.h>

int main(void)
{

    printf("%-15s|%-10s|%-10s|%-25s|%-25s|%-25s|%-10s\n", "Name", "Format", "Bytes", "MAX_(signed)", "MIN_(signed)", "MAX_(unsigned)", "Format_(unsigned)");
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    printf("%-15s|%-10s|%-10d|%-25d|%-25d|%-25u|%-10s\n", "char", "%c", sizeof(char), CHAR_MAX, CHAR_MIN, UCHAR_MAX, "%c");
    printf("%-15s|%-10s|%-10d|%-25d|%-25d|%-25u|%-10s\n", "short", "%hd", sizeof(short), SHRT_MAX, SHRT_MIN, USHRT_MAX, "%hu");
    printf("%-15s|%-10s|%-10d|%-25d|%-25d|%-25u|%-10s\n", "int", "%d", sizeof(int), INT_MAX, INT_MIN, UINT_MAX, "%u");
    printf("%-15s|%-10s|%-10d|%-25ld|%-25ld|%-25lu|%-10s\n", "long", "%ld", sizeof(long), LONG_MAX, LONG_MIN, ULONG_MAX, "%lu");
    printf("%-15s|%-10s|%-10d|%-25lld|%-25lld|%-25llu|%-10s\n", "long long", "%lld", sizeof(long long), LLONG_MAX, LLONG_MIN, ULLONG_MAX, "%llu");

    return 0;
}