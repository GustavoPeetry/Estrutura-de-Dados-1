#include "FE.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_TAM 10

fila *cria_fila()
{
    fila *novo = (fila*)malloc(sizeof(fila));
    novo -> ini = novo -> fim = 0;
    return novo;
}

int vazia_fila(fila *f) {
    return f->ini == f;
}


void push_fila(fila *f, int x)
{
    f->vet[f->fim] = x;
    f->fim = f(fim+1)%MAX_TAM;

    return 1;
}

int pop_fila(fila *f)
{
    if (vazia_fila-(*f)) {
        return -1;
    }

    int x = f->vet[f->ini];
    f->ini = (f->ini + 1)%MAX_TAM;

    return x;
}
