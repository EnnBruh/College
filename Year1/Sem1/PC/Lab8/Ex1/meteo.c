#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "vectorDin.h"

int main(void)
{
    int ret = 0;
    int n;
    if (scanf("%d", &n) != 1)
    {
        ret = 1;
    }

    if (n <= 0)
    {
        ret = 1;
    }

    if (ret == 0)
    {
        printf("Temperaturi minime: ");
        int* tempMin = NULL;
        int* tempMax = NULL;
        double* medie = NULL;

        tempMin = pcitireVector2(n);
        if (tempMin == NULL)
        {
            ret = 1;
        }
        else
        {
            printf("Temperaturi maxime: ");
            tempMax = pcitireVector2(n);
            if (tempMax == NULL)
            {
                ret = 1;
            }
        }

        if (ret == 0)
        {
            printf("Temperaturile minime: ");
            pafisareVector(tempMin, n);
            printf("\n");
            printf("Temperaturile maxime: ");
            pafisareVector(tempMax, n);
            printf("\n");

            medie = vectorMedie(tempMin, tempMax, n);
            if (medie == NULL)
            {
                ret = 1;
            }
            else
            {
                printf("Vector medie: ");
                pafisareVectorReali(medie, n);
                printf("\n");

                double medieTotal = mediaAritmeticaVector(medie, n);
                printf("Media aritmetica: %.2lf\n", medieTotal);
            }

        }

        if (tempMin != NULL)
        {
            memset(tempMin, 0, n * (sizeof (int)));
            free(tempMin);
            tempMin = NULL;
        }

        if (tempMax != NULL)
        {
            memset(tempMax, 0, n * (sizeof (int)));
            free(tempMax);
            tempMax = NULL;
        }

        if (medie != NULL)
        {
            memset(medie, 0, n * (sizeof (int)));
            free(medie);
            medie = NULL;
        }
    }


    if (ret == 1)
    {
        printf("Date invalide\n");
    }
    return ret;
}
