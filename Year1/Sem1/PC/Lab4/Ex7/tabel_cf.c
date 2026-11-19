#include <stdio.h>

int main(void)
{
    int ret = 0;

    int pas = 0;
    printf("Pasul (grade Celsius): ");
    if (scanf("%d", &pas) != 1)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (pas <= 0)
    {
        printf("Pas invalid\n");
        ret = 1;
    }

    if (ret == 0)
    {
        int tempCelsius;
        double tempFahrenheit;
        printf("     C        F\n");
        for (tempCelsius = 0; tempCelsius <= 400; tempCelsius += pas)
        {
            tempFahrenheit = tempCelsius * (9.0 / 5.0) + 32;
            printf("%5d %9.2lf\n", tempCelsius, tempFahrenheit);
        }
    }

    return ret;
}
