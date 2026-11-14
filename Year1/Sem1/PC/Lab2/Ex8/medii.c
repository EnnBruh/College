#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b;
    double mediaAritmetica;
    double mediaGeometrica;

    printf("a: ");
    if (scanf("%lf", &a) != 1)
    {
        printf("Date invalide\n");
        return 1;
    }

    printf("b: ");
    if (scanf("%lf", &b) != 1)
    {
        printf("Date invalide\n");
        return 1;
    }


    mediaAritmetica = (a + b) / 2;
    mediaGeometrica = sqrt(a * b);

    printf("Media aritmetica: %.2lf\n", mediaAritmetica);
    printf("Media geometrica: %.2lf\n", mediaGeometrica);

    return 0;
}
