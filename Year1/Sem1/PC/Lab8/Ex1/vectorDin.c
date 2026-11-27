#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "vectorDin.h"

int* pcitireVector2(int n)
{
    int* a = NULL;
    bool ok = true;
    int i;
    a = (int*)malloc(n * (sizeof (int)));

    if (a == NULL)
    {
        fprintf(stderr, "Alocare de memorie esuata\n");
        exit(EXIT_FAILURE);
    }

    for (i = 0; ok && i < n; ++i)
    {
        printf("a(%d) = ", i);
        if (scanf("%d", &a[i]) != 1)
        {
            ok = false;
        }
    }

    if (!ok)
    {
        memset(a, 0, n * (sizeof (int)));
        free(a);
        a = NULL;
    }

    return a;
}

void pafisareVector(int* a, int n)
{
    int i;
    printf("(");
    for (i = 0; i < n - 1; ++i)
    {
        printf("%d, ", a[i]);
    }
    printf("%d)", a[n - 1]);
}

void pafisareVectorReali(double* a, int n)
{
    int i;
    printf("(");
    for (i = 0; i < n - 1; ++i)
    {
        printf("%.2lf, ", a[i]);
    }
    printf("%.2lf)", a[n - 1]);
}

double* vectorMedie(int* x, int* y, int n);
double mediaAritmeticaVector(double* a, int n);
double mediaAritmeticaIntregi(int a, int b);
double sumaVectorReali(double* a, int n);
