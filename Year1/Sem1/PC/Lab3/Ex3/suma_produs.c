#include <stdio.h>

int main(void)
{
    int ret = 0;
    int x, y;

    printf("Doua numere intregi (x, y): ");
    if (scanf("%d%d", &x, &y) != 2)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (ret == 0)
    {
        int rez;
        if (x > y)
        {
            rez = x + y;
        }
        else
        {
            rez = x * y;
        }

        printf("Rezultatul: %d", rez);
    }

    return ret;
}
