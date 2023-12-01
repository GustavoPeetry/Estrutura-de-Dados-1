#ifndef PD_H
#define PD_H

#define MAX_TAM 100


typedef struct nodo{
    struct nodo *prox;
} nodo;

typedef struct pilha {
    int vet[MAX_TAM][MAX_TAM];
    int topo;
} pilha;

pilha *cria_pilha();
int vazia_pilha(pilha *p);
int cheia_pilha(pilha *p);
void push_pilha(pilha *p, int x);
int pop_pilha(pilha *p);
void imprime_pilha(nodo *p);

#endif // PE
