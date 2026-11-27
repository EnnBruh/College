#include "numere.h"

bool prim(unsigned n)
{
    if (n < 2) 
    {
        return false;
    }
    if (n == 2) 
    {
        return true;
    }

    unsigned d;
    for (d = 3; d * d <= n; d += 2)
    {
        if (n % d == 0)
        {
            return false;
        }
    }

    return true;

}

unsigned cmmdc(unsigned a, unsigned b)
{
    unsigned r;
    while (b)
    {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}
