#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "vectorDin.h"

bool pcitireVectorNat(NATURAL* a, int n)
{
    int i;
    for (i = 0; i < n; ++i)
    {
        if (scanf("%u", &a[i]) != 1)
        {
            return false;
        }
    }
    return true;
}

void pafisareVectorNat(NATURAL* a, int n)
{
    printf("(");
    int i;
    for (i = 0; i < n - 1; ++i)
    {
        printf("%u, ", a[i]);
    }
    printf("%u)", a[n - 1]);
}
void pafisareRate(double* a, int n)
{
    printf("(");
    int i;
    for (i = 0; i < n - 1; ++i)
    {
        printf("%.3lf, ", a[i]);
    }
    printf("%.3lf)", a[n - 1]);
}

bool strictPozitive(NATURAL* a, int n)
{
    int i;
    for (i = 0; i < n; ++i)
    {
        if (a[i] <= 0)
        {
            return false;
        }
    }
    return true;
}

double* rateModificare(NATURAL initial, NATURAL* celule, int n)
{
    double* ans = (double*)malloc(n * (sizeof (double)));
    if (ans != NULL)
    {
        ans[0] = (double)celule[0] / initial;
        int i;
        for (i = 1; i < n; ++i)
        {
            ans[i] = (double)celule[i] / celule[i - 1];
        }
    }
    return ans;
}

double mediaGeometrica(double* a, int n)
{
    int i;
    double ans = 1.0;
    for (i = 0; i < n; ++i)
    {
        ans *= a[i];
    }

    ans = pow(ans, 1.0 / n);
    return ans;
}
