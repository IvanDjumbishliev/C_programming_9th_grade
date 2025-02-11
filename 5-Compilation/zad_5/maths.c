#include <stdio.h>
#include "maths.h"

void factorial(int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result *= i;
    }
    printf("%d\n", result);
}