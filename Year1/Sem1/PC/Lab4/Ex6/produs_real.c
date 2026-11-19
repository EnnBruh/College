#include <stdio.h>

int main(void)
{
    int ret = 0;
    double num = 1;
    double produs = 1;

    printf("Sir de numere (0 pt sfarsit): ");
    do
    {
        produs *= num;
        if (scanf("%lf", &num) != 1)
        {
            printf("Date invalide\n");
            ret = 1;
        }
    } while (num != 0 && ret == 0);


    if (ret == 0)
    {
        printf("Produsul: %.2lf", produs);
    }

    return ret;
}
