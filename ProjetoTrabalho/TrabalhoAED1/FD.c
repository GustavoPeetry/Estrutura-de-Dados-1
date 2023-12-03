#include "FD.h"
#include <stdio.h>
#include <stdlib.h>

fila *cria_filad()
{
    fila *f = (fila *)malloc(sizeof(fila));
    f->ini = 0;
    f->fim = 0;
    return f;
}

void push_filad(fila *f, int x)
{
    nodof *novo = (nodof*)malloc(sizeof(nodof));
    novo->vet = x;
    novo->prox = NULL;

    if (f->ini == NULL)
    {
        f->ini = novo;
        f->fim = novo;
    } else
    {
        f->fim->prox = novo;
        f->fim = novo;
    }
}

int pop_filad(fila *f)
{

    int val = f->ini->vet;
    nodof *temp = f->ini;
    f->ini = f->ini->prox;

    free(temp);

    return val;
}
