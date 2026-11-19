#include <stdio.h>

int main(void)
{
    int ret = 0;

    int a, b;
    printf("Doua numere naturale nenule: ");
    if (scanf("%d%d", &a, &b) != 2)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (a <= 0 || b <= 0)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (ret == 0)
    {
        int r;
        do
        {
            r = a % b;
            a = b;
            b = r;
        } while (r != 0);
        printf("Cel mai mare divizor comun: %d\n", a);
    }

    return ret;
}
