#include <stdio.h>
#include <stdlib.h>
#include "PE.h"

pilha *cria_pilha(){
    pilha *novo = (pilha*)malloc(sizeof(pilha));
    novo -> topo = -1;
    return novo;
}

int vazia(pilha *p)
{
    return p->topo == -1;
}

int cheia(pilha *p)
{
    return p->topo == MAX_TAM - 1;
}

void push_pilha(pilha *p, int x)
{
    int i = 0;
    if (cheia(p))
    {
        printf("PILHA CHEIA"); // REMOVER DEPOIS
    }
    else
    {
        p->vet[++p->topo][i++] = x;
    }
}

int pop_pilha(pilha *p)
{
    if (vazia(p))
    {
        printf("Pilha vazia.");
        return -1; // Valor inválido para indicar pilha vazia
    }
    else
    {
        int i = 0;
        return p->vet[p->topo--][--i];
    }
}
