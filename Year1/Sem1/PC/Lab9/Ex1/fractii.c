#include <stdio.h>
#include "fractie.h"

int main(void)
{
    int ret = 0;

    FRACTIE_CITITA p, q;
    p = citireFractie();
    if (!p.success)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (ret == 0)
    {
        printf("p = "); 
        afisareFractie(p.f);
        printf("\n");

        q = citireFractie();
        if (!q.success)
        {
            printf("Date invalide\n");
            ret = 1;
        }
        else
        {
            printf("q = "); 
            afisareFractie(q.f);
            printf("\n");
        }
    }

    if (ret == 0)
    {
        int op;
        int continua = 1;
        FRACTIE r;
        while (continua && ret == 0)
        {
            if (scanf("%d", &op) != 1)
            {
                printf("Date invalide\n");
                ret = 1;
            }
            switch(op)
            {
                case 1:
                    r = suma(p.f, q.f);
                    printf("p + q = ");
                    afisareFractie(r);
                    printf("\n");
                    break;
                case 2:
                    r = diferenta(p.f, q.f);
                    printf("p - q = ");
                    afisareFractie(r);
                    printf("\n");
                    break;
                case 3:
                    r = produs(p.f, q.f);
                    printf("p * q = ");
                    afisareFractie(r);
                    printf("\n");
                    break;
                case 4:
                    r = produs(p.f, inversa(q.f));
                    printf("p / q = ");
                    afisareFractie(r);
                    printf("\n");
                    break;
                default:
                    printf("Operatie necunoscuta\n");
            }
            printf("Alta operatie?");
            if (scanf("%d", &continua) != 1)
            {
                printf("Date invalide\n");
                ret = 1;
            }
        }
    }


    return ret;
}
