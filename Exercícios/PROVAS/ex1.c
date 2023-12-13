#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo_simples{
    int info;
    struct Nodo_simples *prox;
} nodo_simples;

nodo_simples *ultimo(nodo_simples *lista)
{
    nodo_simples *aux = lista;
    while(aux->prox != NULL)
    {
        aux = aux->prox;
    }

    return aux;
}


