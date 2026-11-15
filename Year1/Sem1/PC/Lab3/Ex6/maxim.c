#include <stdio.h>

int main(void)
{
    int ret = 0;

    int a, b, c;
    printf("3 numere intregi: ");
    if (scanf("%d%d%d", &a, &b, &c) != 3)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (ret == 0)
    {
        int rez = -1;
        if (a > b)
        {
            if (a > c)
            {
                rez = a;
            }
            else
            {
                rez = c;
            }
        }
        else
        {
            if (b > c)
            {
                rez = b;
            }
            else
            {
                rez = c;
            }
        }

        printf("Maximul: %d\n", rez);
    }
    return ret;
}
