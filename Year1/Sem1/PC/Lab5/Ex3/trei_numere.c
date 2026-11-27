#include <stdio.h>
#include "medii.h"

int main(void)
{
    int ret = 0;

    int a, b, c;
    printf("Trei numere: ");
    if (scanf("%d%d%d", &a, &b, &c) != 3)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (ret == 0)
    {
        afisareRezultate(mediaAritmetica(a, b, c), mediaGeometrica(a, b, c), maxim(a, b, c), minim(a, b, c));
    }

    return ret;
}
