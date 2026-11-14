#include <stdio.h>

int main(void)
{
    int a, b;
    double mediaAritmetica;

    printf("a: ");
    if (scanf("%d", &a) != 1)
    {
        printf("Date invalide\n");
        return 1;
    }


    printf("b: ");
    if (scanf("%d", &b) != 1)
    {
        printf("Date invalide\n");
        return 1;
    }

    mediaAritmetica = (a + b) / 2.0;
    printf("Media aritmetica: %lf\n", mediaAritmetica);
    return 0;
}
