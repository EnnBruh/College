#include <stdio.h>

int main(void)
{
    int ret = 0;
    int h1, m1, s1;
    int h2, m2, s2;

    printf("Momentul conectarii: ");
    if (scanf("%d:%d:%d", &h1, &m1, &s1) != 3)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    printf("Momentul deconectarii: ");
    if (scanf("%d:%d:%d", &h2, &m2, &s2) != 3)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (h1 > 23 || h2 > 23)
    {
        printf("Ore invalide\n");
        ret = 1;
    }

    if (m1 > 59 || m2 > 59)
    {
        printf("Minute invalide\n");
        ret = 1;
    }

    if (s1 > 59 || s2 > 59)
    {
        printf("Secunde invalide\n");
        ret = 1;
    }

    if (ret == 0)
    {
        int sec1 = h1 * 3600 + m1 * 60 + s1;
        int sec2 = h2 * 3600 + m2 * 60 + s2;
        if (sec2 < sec1)
        {
            sec2 += 3600 * 24;
        }

        sec2 -= sec1;
        int h = sec2 / 3600;
        sec2 %= 3600;
        int m = sec2 / 60;
        sec2 %= 60;

        printf("%02d:%02d:%02d", h, m, sec2);
    }
    return ret;
}
