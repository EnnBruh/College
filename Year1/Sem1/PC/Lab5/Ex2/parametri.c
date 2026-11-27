#include <stdio.h>
#include "modificare.h"

int main(void)
{
    int ret = 0;
    double a, b;
    printf("Doua numere reale: ");
    if (scanf("%lf%lf", &a, &b) != 2)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (ret == 0)
    {
        printf("Inainte de apel: a = %.2lf, b = %.2lf\n", a, b);
        f1(a, b);
        printf("Dupa apel: a = %.2lf, b = %.2lf\n", a, b);
    }

    return ret;
}
