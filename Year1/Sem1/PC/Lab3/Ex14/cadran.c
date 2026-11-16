#include <stdio.h>

int main(void)
{
    int ret = 0;

    double x, y;
    printf("Coordonatele punctului: ");
    if (scanf("%lf%lf", &x, &y) != 2)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (ret == 0)
    {
        if (x == 0 && y == 0)
        {
            printf("Punct in origine\n");
        }
        else
        {
            if (x == 0 && y != 0)
            {
                if (y > 0)
                {
                    printf("Punct pe axa intre cadranele 1-2\n");
                }
                else
                {
                    printf("Punct pe axa intre cadranele 3-4\n");
                }
            }
            if (x != 0 && y == 0)
            {
                if (x > 0)
                {
                    printf("Punct pe axa intre cadranele 1-4\n");
                }
                else
                {
                    printf("Punct pe axa intre cadranele 2-3\n");
                }
            }
            if (x != 0 && y != 0)
            {
                if (x > 0 && y > 0)
                {
                    printf("Punct in cadranul 1\n");
                }
                if (x > 0 && y < 0)
                {
                    printf("Punct in cadranul 4\n");
                }
                if (x < 0 && y > 0)
                {
                    printf("Punct in cadranul 2\n");
                }
                if (x < 0 && y < 0)
                {
                    printf("Punct in cadranul 3\n");
                }
            }
        }
    }
    return ret;
}
