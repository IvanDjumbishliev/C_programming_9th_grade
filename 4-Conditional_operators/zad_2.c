#include <stdio.h>

#define ARR_SIZE 5

int main(void)
{

#if defined(ARR_SIZE) && ARR_SIZE > 0 && ARR_SIZE < 11
    int arr[ARR_SIZE];
    int k = 1;
    
    for (int i = 0; i < ARR_SIZE; i++)
    {
        arr[i] = k;
        k *= 2;
    }
    
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("%d \n", arr[i]);
    }
#else
    printf("Invalid array size\n");
#endif

    return 0;
}