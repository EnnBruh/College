#include <stdio.h>
#include <math.h>
#include "medii.h"

int maxim(int a, int b, int c)
{
    int ans = -1;
    if (a > b)
    {
        if (a > c)
        {
            ans = a;
        }
        else
        {
            ans = c;
        }
    }
    else
    {
        if (b > c)
        {
            ans = b;
        }
        else
        {
            ans = c;
        }
    }

    return ans;
}

int minim(int a, int b, int c)
{

    int ans = -1;
    if (a < b)
    {
        if (a < c)
        {
            ans = a;
        }
        else
        {
            ans = c;
        }
    }
    else
    {
        if (b < c)
        {
            ans = b;
        }
        else
        {
            ans = c;
        }
    }

    return ans;
}

double mediaAritmetica(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

double mediaGeometrica(int a, int b, int c)
{
    return cbrt(a * b * c);
}


void afisareRezultate(double mediaAritmetica, double mediaGeometrica, int maxim, int minim)
{
    printf("Media aritmetica: %.2lf\n", mediaAritmetica);
    printf("Media geometrica: %.2lf\n", mediaGeometrica);
    printf("Maximul: %d\n", maxim);
    printf("Minimul: %d\n", minim);
}
