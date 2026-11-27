#include <stdio.h>
#include "modificare.h"

void f1(double a, double x)
{
    a += 10;
    x *= 2;
    printf("In f1: a = %.2lf, x = %.2lf\n", a, x);
}
