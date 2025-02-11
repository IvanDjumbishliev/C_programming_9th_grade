#include "safeint.h"
#include <limits.h>
#include <stdlib.h>

SafeResult safeadd(int a, int b) {
    SafeResult result;
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b)) {
        result.errorflag = 1;
        result.value = 0;
    } else {
        result.errorflag = 0;
        result.value = a + b;
    }
    return result;
}

SafeResult safesubtract(int a, int b) {
    SafeResult result;
    if ((b > 0 && a < INT_MIN + b) || (b < 0 && a > INT_MAX + b)) {
        result.errorflag = 1;
        result.value = 0;
    } else {
        result.errorflag = 0;
        result.value = a - b;
    }
    return result;
}

SafeResult safemultiply(int a, int b) {
    SafeResult result;
    if (a != 0 && ((b > 0 && a > INT_MAX / b) || (b > 0 && a < INT_MIN / b) || 
                   (b < 0 && a < INT_MAX / b) || (b < 0 && a > INT_MIN / b))) {
        result.errorflag = 1;
        result.value = 0;
    } else {
        result.errorflag = 0;
        result.value = a * b;
    }
    return result;
}

SafeResult safedivide(int a, int b) {
    SafeResult result;
    if (b == 0 || (a == INT_MIN && b == -1)) {
        result.errorflag = 1;
        result.value = 0;
    } else {
        result.errorflag = 0;
        result.value = a / b;
    }
    return result;
}

SafeResult safestrtoint(const char *str) {
    SafeResult result;
    int value = atoi(str);

    if (value == INT_MAX && str[0] != '-' && str[1] != '\0') {

        result.value = INT_MAX;
        result.errorflag = 1;
    } else if (value == INT_MIN && str[0] == '-' && str[1] != '\0') {

        result.value = INT_MIN;
        result.errorflag = 1;
    } else {
        result.value = value;
        result.errorflag = 0;
    }

    return result;
}
