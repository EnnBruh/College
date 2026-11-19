#include <stdio.h>

int main(void)
{
    int ret = 0;

    int n;
    printf("Cate numere: ");
    if (scanf("%d", &n) != 1)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (n < 0)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (ret == 0)
    {
        int sum = 0;
        int num = 0;
        for (int i = 0; i < n && ret == 0; ++i)
        {
            printf("Numarul %d: ", i + 1);
            if (scanf("%d", &num) != 1)
            {
                printf("Date invalide\n");
                ret = 1;
            }
            sum += num;
        }
        if (ret == 0)
        {
            printf("Suma: %d\n", sum);
        }
    }


    return ret;
}
