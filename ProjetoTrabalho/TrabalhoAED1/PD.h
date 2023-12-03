#ifndef PD_H
#define PD_H

#define MAX_TAM 100


typedef struct nodo{
    int *vet;
    struct nodo *prox;
} nodo;

typedef struct pilha {
    nodo *topo;
} pilha;

pilha *cria_pilhad();
int vazia_pilhad(pilha *p);
int cheia_pilhad(pilha *p);
void push_pilhad(pilha *p, int[5]);
int *pop_pilhad(pilha *p);

#endif // PD
