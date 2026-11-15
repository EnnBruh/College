#include <stdio.h>

int main(void)
{
    int ret = 0;
    int num;
    char op;

    printf("Numar intreg: ");
    if (scanf("%d", &num) != 1)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    printf("Operatie (d - t): ");
    if (scanf(" %c", &op) != 1)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (ret == 0)
    {
        switch (op)
        {
            case 'd':
                printf("Numarul dublat: %d\n", num * 2);
                break;
            case 't':
                printf("Numarul triplat: %d\n", num * 3);
                break;
            default:
                printf("Operatie necunoscuta\n");
                ret = 1;
        }
    }
    return ret;
}
