#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include "vectorDin.h"

int main(void)
{
    int ret = 0;

    NATURAL initial = 0;
    int numZile = 0;
    NATURAL* celule = NULL;
    double* modificare = NULL;
    if (scanf("%u", &initial) != 1)
    {
        ret = 1;
    }

    if (ret == 0)
    {
        if (scanf("%d", &numZile) != 1)
        {
            ret = 1;
        }
    }

    if (ret == 0)
    {
        celule = (NATURAL*)malloc(numZile * (sizeof (NATURAL)));
        if (!pcitireVectorNat(celule, numZile))
        {
            ret = 1;
        }
        else
        {
            if (!strictPozitive(celule, numZile))
            {
                ret = 1;
            }
        }
    }

    if (ret == 0)
    {
        printf("Numarul initial de celule: %u\n", initial);
        printf("Numarul de zile observate: %d\n", numZile);
        printf("Numarul de celule: ");
        pafisareVectorNat(celule, numZile);
        printf("\n");

        modificare = rateModificare(initial, celule, numZile);
        printf("Rata zilnica de modificare: ");
        pafisareRate(modificare, numZile);
        printf("\n");

        double medGeom = mediaGeometrica(modificare, numZile);
        printf("Media geometrica: %.3lf\n", medGeom);
        printf("Rata medie de modificare: %.3lf (%.1lf%%)\n", medGeom - 1.0, (medGeom - 1.0) * 100.0);

    }

    if (celule != NULL)
    {
        memset(celule, 0, numZile * (sizeof (NATURAL)));
        free(celule);
        celule = NULL;
    }

    if (modificare != NULL)
    {
        memset(modificare, 0, numZile * (sizeof (double)));
        free(modificare);
        modificare = NULL;
    }

    if (ret == 1)
    {
        printf("Date invalide\n");
    }

    return ret;
}
