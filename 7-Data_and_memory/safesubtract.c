#include <stdio.h>
#include "safeint.h"
#include "until.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <number1> <number2>\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    SafeResult result = Safesubtract(a, b);

    if (result.errorflag) {
        print_error("Overflow or underflow occurred");
    } else {
        printf("Result: %d\n", result.value);
    }

    return 0;
}