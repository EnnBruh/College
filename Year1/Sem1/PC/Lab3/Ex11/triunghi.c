#include <stdio.h>

int main(void)
{
    int ret = 0;

    int a, b, c;
    printf("Laturile triunghiului (3 numere intregi): ");
    if (scanf("%d%d%d", &a, &b, &c) != 3)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (ret == 0)
    {
        bool isTriangle = true;
        char* triangleType = "oarecare";
        if (a <= 0 || b <= 0 || c <= 0)
        {
            isTriangle = false;
        }

        if (a >= (b + c) || b >= (a + c) || c >= (a + b))
        {
            isTriangle = false;
        }

        if (isTriangle)
        {
            if (a == b && b == c)
            {
                triangleType = "echilateral";
            }
            else
            {
                if (a == b || b == c)
                {
                    triangleType = "isoscel";
                }
                else 
                {
                    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
                    {
                        triangleType = "dreptunghic";
                    }
                }
            }
        }

        if (isTriangle)
        {
            printf("Este triunghi %s cu perimetrul %d\n", triangleType, a + b + c);
        }
        else
        {
            printf("Nu este triunghi\n");
        }
    }
    return ret;
}
