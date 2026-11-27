#ifndef _FRACTIE_H_
#define _FRACTIE_H_

#define LIMITA (10000)

struct _FRACTIE
{
    int numarator;
    int numitor;
};

typedef struct _FRACTIE FRACTIE;

typedef struct 
{
    bool success;
    FRACTIE f;
} FRACTIE_CITITA;

FRACTIE_CITITA citireFractie(void);
void afisareFractie(FRACTIE f);
FRACTIE ireductibila(FRACTIE f);
FRACTIE inversa(FRACTIE f);
FRACTIE suma(FRACTIE p, FRACTIE q);
FRACTIE diferenta(FRACTIE p, FRACTIE q);
FRACTIE produs(FRACTIE p, FRACTIE q);

#endif //_FRACTIE_H_
