#include <stdio.h>

int main(void)
{
    int ret = 0;
    double num;

    printf("Numar: ");
    if (scanf("%lf", &num) != 1)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (ret == 0) 
    {
        if (num < 0)
        {
            num = -num;
        }

        printf("Modulul numarului: %.2lf", num);
    }

    return ret;
}
