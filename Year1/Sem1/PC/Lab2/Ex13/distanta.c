#include <stdio.h>
#include <math.h>

int main(void)
{
    double x1, y1;
    double x2, y2;

    printf("Punctul 1: ");
    if (scanf("%lf%lf", &x1, &y1) != 2)
    {
        printf("Date invalide\n");
        return 1;
    }

    printf("Punctul 2: ");
    if (scanf("%lf%lf", &x2, &y2) != 2)
    {
        printf("Date invalide\n");
        return 1;
    }


    double distanta = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("Distanta dintre puncte: %.2lf", distanta);
    return 0;
}
