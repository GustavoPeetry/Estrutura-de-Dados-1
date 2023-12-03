
#include <stdio.h>
#include <stdlib.h>
#include "PD.h"

pilha *cria_pilhad(){
    pilha *novo = (pilha*)malloc(sizeof(pilha));
    novo -> topo = NULL;
    return novo;
}

int vazia_pilhad(pilha *p)
{
    return p->topo == -1;
}

int cheia_pilhad(pilha *p)
{
    return p->topo == 2;
}

void push_pilhad(pilha* p, int *vet)
{
    int i, tam = 0;
    nodo *novo = (nodo*)malloc(sizeof(nodo));
    novo->vet = (int *)malloc(MAX_TAM * sizeof(int));

    if (cheia_pilha(p))
    {
        printf("Pilha cheia...");
        return;
    }

    for(i = 0;i < MAX_TAM ;i++)
    {
        tam++;
        if(vet[i] == -1)
        {
            break;
        }
        else if(tam > MAX_TAM)
        {
            printf("Excesso de numeros");
            return;
        }
    }

    for(i = 0; i<tam;i++)
    {
        novo->vet[i] = vet[i];
    }

    for(i = 0;i < tam ;i++)
    {
        if(vet[i] == -1)
            break;
        printf("%d|",novo->vet[i]);
    }
    printf("\n");

    novo->prox = p->topo;
    p->topo = novo;
}

int *pop_pilhad(pilha *p)
{
    if (vazia_pilha(p))
    {
        return NULL;
    }
    else
    {
        nodo *temp = p->topo;
        int *r = temp->vet;
        p->topo = temp->prox;
        free(temp);
        return r;
    }
}
