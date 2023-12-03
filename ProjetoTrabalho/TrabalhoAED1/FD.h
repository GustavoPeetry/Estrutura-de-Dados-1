#ifndef FD_H
#define FD_H

#define MAX_TAM 10

typedef struct nodof {
    int *vet;
    struct nodof *prox;
} nodof;

typedef struct filad{
    nodof *ini;
    nodof *fim;
} fila;

fila *cria_filad();
void push_filad(fila *f, int x);
int pop_filad(fila *f);

#endif // FE

