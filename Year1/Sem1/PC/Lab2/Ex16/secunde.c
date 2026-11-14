#include <stdio.h>

int main(void)
{
    int sec;
    printf("Secunde: ");
    if (scanf("%d", &sec) != 1)
    {
        printf("Date invalide\n");
        return 1;
    }

    int hour = sec / 3600;
    sec %= 3600;
    int minute = sec / 60;
    sec %= 60;

    printf("Timp: %dh%dm%ds", hour, minute, sec);
    return 0;
}
