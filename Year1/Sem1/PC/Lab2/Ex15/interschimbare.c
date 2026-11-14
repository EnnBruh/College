#include <stdio.h>

int main(void)
{
    int a, b;

    printf("a, b: ");
    if (scanf("%d%d", &a, &b) != 2)
    {
        printf("Date invalide\n");
        return 1;
    }


    int temp = a;
    a = b;
    b = temp;

    printf("a, b: %d, %d", a, b);
    return 0;
}
