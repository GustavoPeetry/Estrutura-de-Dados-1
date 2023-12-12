#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
    int info;
    struct Nodo *prox;
}nodo;


nodo *criaNodo(int x)
{
    nodo *novo = (nodo *)malloc(sizeof(novo));
    novo->info = x;


    return novo;
}



int main()
{
    nodo *elemento;

    elemento = criaNodo(25);
    printf("%d", elemento->info);


    free(elemento);
    return 0;
}
