#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    double semiPerim;
    double arie;

    printf("Laturile: ");
    if (scanf("%d%d%d", &a, &b, &c) != 3)
    {
        printf("Date invalide\n");
        return 1;
    }

    semiPerim = (a + b + c) / 2.0;
    arie = sqrt(semiPerim * (semiPerim - a) * (semiPerim - b) * (semiPerim - c));

    printf("Aria triunghiului: %lf\n", arie);
    return 0;
}
