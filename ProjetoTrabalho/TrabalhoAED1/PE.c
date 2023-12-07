#include <stdio.h>
#include <stdlib.h>
#include "PE.h"


pilha *cria_pilha(){
    pilha *novo = (pilha*)malloc(sizeof(pilha));
    novo -> topo = -1;
    return novo;
}

int vazia_pilha(pilha *p)
{
    return p->topo == -1;
}

int cheia_pilha(pilha *p)
{
    return p->topo == MAX_TAM - 1;
}

void push_pilha(pilha* p, int *vet)
{
    int i, tam = 0;
    //Subir o topo para colocar o próximo vetor
    //p->topo++;
    //Empilhar o vetor recebido como parâmetro

    if (cheia_pilha(p))
    {
        printf("Pilha cheia...");
        return;
    }

    p->topo++;
    p->vet[p->topo] = (int *)malloc(MAX_TAM * sizeof(int));

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
        p->vet[p->topo][i] = vet[i];
    }

    printf("[%d", p->vet[p->topo][0]);
    for(i = 1;i < tam ;i++)
    {
        if(vet[i] == -1)
            break;
        printf(" %d",p->vet[p->topo][i]);
    }
    printf("] empilhado.\n");
}

int *pop_pilha(pilha *p)
{
    if (vazia_pilha(p))
    {
        return NULL;
    }
    else
    {
        int *r = (p->vet[p->topo--]);
        return r;
    }
}
