#include <stdio.h>

int main(void)
{
    double tempCelsius;
    double tempFahrenheit;
    printf("Temperatura in grade Celsius: ");
    if (scanf("%lf", &tempCelsius) != 1)
    {
        printf("Date invalide\n");
        return 1;
    }

    tempFahrenheit = (9.0 / 5.0) * tempCelsius + 32.0;
    printf("Temperatura in grade Fahrenheit: %.2lf", tempFahrenheit);
    return 0;
}
