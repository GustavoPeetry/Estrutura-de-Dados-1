#ifndef FD_H
#define FD_H

#define MAX_TAM 10

typedef struct no {
    int valor;
    struct no *prox;
} no;

typedef struct fila{
    no *ini;
    no *fim;
} fila;

fila *cria_fila();
int vazia_fila(fila *f);
void push_fila(fila *f, int x);
int pop_fila(fila *f);

#endif // FE

