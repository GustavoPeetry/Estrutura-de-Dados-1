#ifndef FE_H
#define FE_H

#define MAX_TAM 10

typedef struct fila{
    int vet[MAX_TAM];
    int ini;
    int fim;
} fila;

fila *cria_fila();
int vazia(fila *p);
int cheia(fila *p);
void push_fila(fila *p, int x);
int pop_fila(fila *p);

#endif // FE

