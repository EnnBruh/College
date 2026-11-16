#include <stdio.h>
#include <math.h>

int main(void)
{
    int ret = 0;

    double x;
    printf("Numar real x: ");
    if (scanf("%lf", &x) != 1)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (ret == 0)
    {
        double fx = 0;
        if (x <= 1)
        {
            fx = x * x + 1;
        }
        else
        {
            fx = log(x * x * x + 2);
        }

        printf("f(x) = %.4lf\n", fx + x + 1);
    }


    return ret;
}
