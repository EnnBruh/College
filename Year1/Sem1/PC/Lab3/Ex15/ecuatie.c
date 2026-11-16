#include <stdio.h>
#include <math.h>

int main(void)
{
    int ret = 0;

    double a, b, c;
    printf("3 Numere reale: ");
    if (scanf("%lf%lf%lf", &a, &b, &c) != 3)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Orice numar real este solutie\n");
            }
            else
            {
                printf("Ecuatie fara sens %.2lf = 0\n", c);
            }
        }
        else
        {
            printf("Ecuatie de gradul I cu solutie x = %.2lf", -(c / b));
        }
    }
    else
    {
        double delta = b * b - 4 * a * c;
        if (delta < 0)
        {
            printf("Ecuatie de gradul II cu solutiile complexe x1 = %.2lfi, x2 = %.2lfi\n", (-b + sqrt(-delta)) / (2 * a), (-b - sqrt(-delta)) / (2 * a));
        }
        else
        {
            printf("Ecuatie de gradul II cu solutiile x1 = %.2lf, x2 = %.2lf\n", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
        }
    }
    return ret;
}
