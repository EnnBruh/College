#include <stdio.h>
#include <stdlib.h>
#include "numere.h"
#include "fractie.h"

FRACTIE_CITITA citireFractie(void)
{
    FRACTIE_CITITA a;
    a.success = true;

    if (scanf("%d", &a.f.numarator) != 1)
    {
        a.success = false;
    }
    else
    {
        if (scanf("%d", &a.f.numitor) != 1)
        {
            a.success = false;
        }
    }

    if (a.success == true)
    {
        if (a.f.numitor == 0)
        {
            a.success = false;
        }

        if (a.f.numarator < -LIMITA || a.f.numarator > LIMITA)
        {
            a.success = false;
        }

        if (a.f.numitor < -LIMITA || a.f.numitor > LIMITA)
        {
            a.success = false;
        }
    }
    return a;
}

void afisareFractie(FRACTIE f)
{
    printf("%d/%d", f.numarator, f.numitor);
}

FRACTIE ireductibila(FRACTIE f)
{
    if (f.numarator == 0)
    {
        f.numitor = 1;
    }
    else
    {
        if (f.numitor < 0)
        {
            f.numitor = -f.numitor;
            f.numarator = -f.numarator;
        }

        unsigned modul = abs(f.numarator);
        unsigned d = cmmdc((unsigned int) modul, (unsigned int) f.numitor);
        f.numarator = f.numarator / (int) d;
        f.numitor = f.numitor / (int) d;
    }
    return f;
}

FRACTIE inversa(FRACTIE f)
{
    int aux = f.numarator;
    f.numarator = f.numitor;
    f.numitor = aux;
    return ireductibila(f);
}

FRACTIE suma(FRACTIE p, FRACTIE q)
{
    FRACTIE r;
    r.numarator = p.numarator * q.numitor + q.numarator * p.numitor;
    r.numitor = p.numitor * q.numitor;
    r = ireductibila(r);
    return r;
}

FRACTIE diferenta(FRACTIE p, FRACTIE q)
{
    FRACTIE r;
    r.numarator = p.numarator * q.numitor - q.numarator * p.numitor;
    r.numitor = p.numitor * q.numitor;
    r = ireductibila(r);
    return r;
}

FRACTIE produs(FRACTIE p, FRACTIE q)
{
    FRACTIE r;
    r.numitor = p.numitor * q.numitor;
    r.numarator = p.numarator * q.numarator ;
    return ireductibila(r);
}

