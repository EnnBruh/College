#include <stdio.h>
#include <math.h>

int main(void)
{
    int ret = 0;
    double num;
    printf("Numar real: ");
    if (scanf("%lf", &num) != 1)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (ret == 0)
    {
        double bla = 1;
        double mindist = 10000;
        double apropiat;
        int apropiatPoz = -1;
        for (int i = 0; ret == 0 && bla > 0; ++i)
        {
            if (scanf("%lf", &bla) != 1)
            {
                printf("Date invalide\n");
                ret = 1;
            }

            if (ret == 0 && bla > 0)
            {
                if (fabs(bla - num) < mindist)
                {
                    mindist = fabs(bla - num);
                    apropiat = bla;
                    apropiatPoz = i + 1;
                }
            }
        }

        if (ret == 0 && apropiatPoz != -1)
        {
            printf("Cel mai apropiat numar este %.2lf si pozitia lui este %d\n", apropiat, apropiatPoz);
        }
        else
        {
            if (apropiatPoz == -1)
            {
                printf("Sirul nu are elemente\n");
            }
        }
    }

    return ret;
}
