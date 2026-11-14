#include <stdio.h>

int main(void)
{
    double pret;
    int reducere;

    printf("Pretul: ");
    if (scanf("%lf", &pret) != 1)
    {
        printf("Date invalide\n");
        return 1;
    }

    printf("Reducere: ");
    if (scanf("%d", &reducere) != 1)
    {
        printf("Date invalide\n");
        return 1;
    }

    double pretFinal = pret - pret * (reducere / 100.0);
    printf("Pretul dupa reducere: %.2lf\n", pretFinal);
    return 0;
}
