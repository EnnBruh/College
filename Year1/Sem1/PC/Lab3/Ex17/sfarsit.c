#include <stdio.h>

int main(void)
{
    int ret = 0;

    int h1, m1, s1;
    printf("Momentul conectarii: ");
    if (scanf("%d:%d:%d", &h1, &m1, &s1) != 3)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    int h2, m2, s2;
    printf("Durata conexiunii: ");
    if (scanf("%d:%d:%d", &h2, &m2, &s2) != 3)
    {
        printf("Date invalide\n");
        ret = 1;
    }

    if (ret == 0)
    {
        bool nextDay = false;
        s2 += s1;
        if (s2 > 59)
        {
            m2 += 1;
            s2 -= 60;
        }

        m2 += m1;
        if (m2 > 59)
        {
            h2 += 1;
            m2 -= 60;
        }

        h2 += h1;
        if (h2 > 23)
        {
            nextDay = true;
            h2 -= 24;
        }

        printf("Momentul deconectarii: %02d:%02d:%02d ", h2, m2, s2);
        if (nextDay)
        {
            printf("(a doua zi)");
        }
        printf("\n");
    }
    return ret;
}
