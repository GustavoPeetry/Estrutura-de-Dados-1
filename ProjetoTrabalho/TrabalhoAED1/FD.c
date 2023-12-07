#include "FD.h"
#include <stdio.h>
#include <stdlib.h>

fila *cria_fila()
{
    fila *f = (fila *)malloc(sizeof(fila));
    f->ini = 0;
    f->fim = 0;
    return f;
}

int vazia_fila(fila *f)
{
    if ((f->fim == NULL) && (f->ini == NULL))
        return 1;
    else return 0;
}

void push_fila(fila *f, int x)
{
    no *novo = (no*)malloc(sizeof(no));
    novo->valor = x;
    novo->prox = NULL;

    if (f->fim != NULL)
        f->fim->prox = novo;
    f->fim = novo;
    if(f->ini==NULL)
        f->ini = novo;
}

int pop_fila(fila *f)
{
    if(f->fim == f->ini)
        f->fim = NULL;
    int x = f->ini->valor;
    struct no *aux = f->ini->prox;
    free(f->ini);
    f->ini = aux;
    return x;
}
