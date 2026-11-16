#include <stdio.h>

int main(void)
{
    int ret = 0;

    int op;
    printf("Operatia (c = catul, r = restul): ");
    op = getchar();

    int a, b;
    printf("Doua numere naturale: ");
    if (scanf("%d%d", &a, &b) != 2)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (a < 0 || b < 0)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (ret == 0)
    {
        switch (op)
        {
            case 'c':
                if (a == 0 || b == 0)
                {
                    printf("Impartire la zero\n");
                }
                else
                {
                    printf("Catul: %u\n", a > b ? a / b : b / a);
                }
                break;
            case 'r':
                if (a == 0 || b == 0)
                {
                    printf("Impartire la zero\n");
                }
                else
                {
                    printf("Restul: %u\n", a > b ? a % b : b % a);
                }
                break;
            default:
                printf("Operatie necunoscuta\n");
        }
    }

    return ret;
}
