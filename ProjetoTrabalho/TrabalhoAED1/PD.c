#include <stdio.h>
#include <stdlib.h>
#include "PD.h"

pilha *cria_pilha(){
    pilha *novo = (pilha*)malloc(sizeof(pilha));
    novo -> topo = NULL;
    return novo;
}

int vazia_pilha(pilha *p)
{
    return p->topo == NULL;
}

int cheia_pilha(pilha *p)
{
    return p->topo == 2;
}

void push_pilha(pilha* p, int *vet, int tam)
{
    int i, tamanho = 0;
    p->tam = tam;
    nodo *novo = (nodo*)malloc(sizeof(nodo));
    novo->vet = (int *)malloc(MAX_TAM * sizeof(int));

    if (cheia_pilha(p))
    {
        printf("Pilha cheia...");
        return;
    }

    for(i = 0;i < MAX_TAM ;i++)
    {
        tamanho++;
        if(vet[i] == -1)//-1 vai ser utilizado como marcador do final do vetor
        {
            tamanho++;
            break;
        }
        else if(tamanho > MAX_TAM)
        {
            printf("Excesso de numeros");
            return;
        }
    }

    for(i = 0; i<tamanho;i++)
    {
        novo->vet[i] = vet[i];
    }

    printf("[%d", novo->vet[0]);
    for (i = 1; i < tamanho; i++)
    {
        if (vet[i] == -1)
            break;
        printf(" %d", novo->vet[i]);
    }
    printf("] empilhado.\n");


    novo->prox = p->topo;
    p->topo = novo;
}

int *pop_pilha(pilha *p)
{
    int tam = p->tam;
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
