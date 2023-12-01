#include <stdio.h>
#include <stdlib.h>
#include "PE.h"


pilha *cria_pilha(){
    pilha *novo = (pilha*)malloc(sizeof(pilha));
    novo -> topo = 0;
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

void push_pilha(pilha* p, int* vetor)
{

    int i = 0;
    //Subir o topo para colocar o próximo vetor
    //p->topo++;
    //Empilhar o vetor recebido como parâmetro
    for(i = 0;i < 100;i++){

        if(vetor[i] == -1) i = 100;

        else p->vet[p->topo][i] = vetor[i];

    }

    for(i = 0;i < 100;i++){
        if(vetor[i] == -1) break;
        printf("%d",p->vet[p->topo][i]);
    }
}

int pop_pilha(pilha *p)
{
    if (vazia_pilha(p))
    {
        printf("Pilha vazia...");
        return -1; // Valor inválido para indicar pilha vazia
    }
    else
    {
        return p->vet[p->topo--][0];
    }
}
