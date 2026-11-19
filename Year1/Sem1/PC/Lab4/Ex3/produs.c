#include <stdio.h>

int main(void)
{
    int ret = 0;

    int x;
    int produs = 1;

    printf("Numar intreg (0 pentru sfarsit): ");
    if (scanf("%d", &x) != 1)
    {
        ret = 1;
    }

    while (x != 0 && ret == 0)
    {
        produs *= x;
        printf("Numar intreg (0 pentru sfarsit): ");
        if (scanf("%d", &x) != 1)
        {
            ret = 1;
        }
    }

    if (ret == 1)
    {
        printf("Date invalide\n");
    }
    else
    {
        printf("Produsul este %d\n", produs);
    }

    return ret;
}
