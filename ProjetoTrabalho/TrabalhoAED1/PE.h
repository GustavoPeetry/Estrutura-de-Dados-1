#ifndef PE_H
#define PE_H

#define MAX_TAM 100

typedef struct pilha {
    int vet[MAX_TAM][MAX_TAM];
    int topo;
} pilha;
pilha *cria_pilha();
int vazia_pilha(pilha *p);
int cheia_pilha(pilha *p);
void push_pilha(pilha *p, int vet[5]);
int pop_pilha(pilha *p);
//void imprime_pilha(vet[MAX_TAM][MAX_TAM] *p);

#endif // PE
