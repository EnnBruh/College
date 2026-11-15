#include <stdio.h>

int main(void)
{
    int ret = 0;
    int c;
    printf("Anotimpul (1 - 4): ");
    c = getchar();

    switch (c)
    {
        case '1':
            printf("Primavara\n");
            break;
        case '2':
            printf("Vara\n");
            break;
        case '3':
            printf("Toamna\n");
            break;
        case '4':
            printf("Iarna\n");
            break;
        default:
            printf("Anotimp necunoscut\n");
            ret = 1;
    }

    return ret;
}
