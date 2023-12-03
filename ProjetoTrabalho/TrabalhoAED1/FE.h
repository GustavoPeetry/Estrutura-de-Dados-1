#ifndef FE_H
#define FE_H

#define MAX_TAM 10

typedef struct fila{
    int vet[MAX_TAM];
    int ini;
    int fim;
} fila;

fila *cria_fila();
void push_fila(fila *f, int x);
int pop_fila(fila *f);

#endif // FE

