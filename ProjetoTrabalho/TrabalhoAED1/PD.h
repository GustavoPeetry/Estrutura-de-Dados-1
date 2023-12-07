#ifndef PD_H
#define PD_H

#define MAX_TAM 100


typedef struct nodo{
    int *vet;
    struct nodo *prox;
} nodo;

typedef struct pilha {
    nodo *topo;
    int tam;
} pilha;

pilha *cria_pilha();
int vazia_pilha(pilha *p);
int cheia_pilha(pilha *p);
void push_pilha(pilha *p, int *vet, int tam);
int *pop_pilha(pilha *p);

#endif // PD
