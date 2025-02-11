#include <stdio.h>
#include "quadraticroots.h"

int main()
{

    QuadraticRootsResult result;

    int a = 2;
    int b = 3;
    int c = 7;

    result = findroots(a, b, c);

    if (result.norealroots)
    {
        printf("No real roots\n");
    }
    else
    {
        printf("Roots are: %Lf and %Lf\n", result.x1, result.x2);
    }

    float a1 = 2.5;
    float b1 = 10.3;
    float c1 = 5.6;

    result = findroots(a1, b1, c1);

    if (result.norealroots)
    {
        printf("No real roots\n");
    }
    else
    {
        printf("Roots are: %Lf and %Lf\n", result.x1, result.x2);
    }

    double a2 = 1.245;
    double b2 = 4.325;
    double c2 = 8.425;

    result = findroots(a2, b2, c2);

    if (result.norealroots)
    {
        printf("No real roots\n");
    }
    else
    {
        printf("Roots are: %Lf and %Lf\n", result.x1, result.x2);
    }

    return 0;
}