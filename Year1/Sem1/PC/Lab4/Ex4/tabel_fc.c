#include <stdio.h>

int main(void)
{
    int tempFahrenheit;
    double tempCelsius;

    printf("    F        C\n");
    for (tempFahrenheit = 0; tempFahrenheit <= 300; tempFahrenheit += 10)
    {
        tempCelsius = (5.0 / 9.0) * (tempFahrenheit - 32);
        printf("%5d %9.2lf\n", tempFahrenheit, tempCelsius);
    }
    return 0;
}
