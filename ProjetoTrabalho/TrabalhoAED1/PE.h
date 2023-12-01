#ifndef PE_H
#define PE_H

#define MAX_TAM 100

typedef struct pilha {
    int vet[MAX_TAM][MAX_TAM];
    int topo;
} pilha;

pilha *cria_pilha();
int vazia(pilha *p);
int cheia(pilha *p);
void push_pilha(pilha *p, int x);
int pop_pilha(pilha *p);

#endif // PE
