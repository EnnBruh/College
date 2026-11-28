#ifndef _VECTOR_DIN_H
#define _VECTOR_DIN_H

typedef unsigned int NATURAL;

bool pcitireVectorNat(NATURAL* a, int n);
void pafisareVectorNat(NATURAL* a, int n);
void pafisareRate(double* a, int n);

bool strictPozitive(NATURAL* a, int n);
double* rateModificare(NATURAL initial, NATURAL* celule, int n);
double mediaGeometrica(double* a, int n);

#endif //_VECTOR_DIN_H

