#include <stdio.h>

int main(void)
{
    int ret = 0;

    double a, b;
    char op;
    printf("1 - suma\n2 - diferenta\n3 - produsul\n4 - impartirea\n");
    printf("Doua numere reale: ");
    if (scanf("%lf%lf", &a, &b) != 2)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    printf("Operatie: ");
    if (scanf(" %c", &op) != 1)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    switch (op)
    {
        case '1':
            printf("Suma: %lf", a + b);
            break;
        case '2':
            printf("Diferenta: %lf", (a - b) < 0 ? (b - a) : (a - b));
            break;
        case '3':
            printf("Produsul: %lf", a * b);
        case '4':
            printf("
        default:
            printf("Operatie necunoscuta\n");
            ret = 1;
    }
    return ret;
}
