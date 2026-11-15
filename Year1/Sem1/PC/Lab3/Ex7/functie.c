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
        double ans = 0;
        if (x <= 2)
        {
            ans = x * x + 3 * x + 5;
        }
        else
        {
            if (x < 8)
            {
                ans = 3 * x;
            }
            else
            {
                ans = exp(x) + 2;
            }
        }

        printf("%lf\n", ans);
    }
    return ret;
}
