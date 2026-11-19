#include <stdio.h>

int main(void)
{
    int ret = 0;

    int num = 1;
    do
    {
        if (scanf("%d", &num) != 1 || num < 0)
        {
            ret = 1;
            printf("Date invalide\n");
        }

        if (ret == 0 && num != 0)
        {
            for (int k = num; k >= 1; --k)
            {
                if (k * k <= num)
                {
                    printf("Patrat perfect <= %d este %d\n", num, k * k);
                    break;
                }
            }
        }
    } while (num != 0 && ret == 0);
    return ret;
}
