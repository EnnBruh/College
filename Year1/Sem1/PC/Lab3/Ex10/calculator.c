#include <stdio.h>


int main(void)
{
    int ret = 0;

    printf("1 - suma\n2 - diferenta\n3 - produsul\n4 - impartirea\n");
    printf("Optiunea: ");
    int op = getchar();

    double a, b;
    printf("Doua numere reale: ");
    if (scanf("%lf%lf", &a, &b) != 2)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    switch (op)
    {
        case '1':
            printf("Suma: %lf\n", a + b);
            break;
        case '2':
            printf("Diferenta: %lf\n", (a - b) < 0 ? (b - a) : (a - b));
            break;
        case '3':
            printf("Produsul: %lf\n", a * b);
        case '4':
            if (b == 0.0)
            {
                printf("Impartire la zero\n");
                ret = 1;
            }
            else
            {
                printf("Impartire: %lf\n", a / b);
            }
            break;
        default:
            printf("Operatie necunoscuta\n");
            ret = 1;
    }
    return ret;
}
