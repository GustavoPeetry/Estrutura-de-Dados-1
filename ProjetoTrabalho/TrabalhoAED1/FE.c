#include "FE.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_TAM 10

fila *cria_fila()
{
    fila *f = (fila*)malloc(sizeof(fila));
    f->ini = 0;
    f->fim = 0;
    return f;
}

void push_fila(fila *f, int x)
{
    f->vet[f->fim] = x;
    f->fim = (f->fim + 1) % MAX_TAM;
}

int pop_fila(fila *f)
{
    int val = f->vet[f->ini];
    f->ini = (f->ini + 1) % MAX_TAM;
    return val;
}
