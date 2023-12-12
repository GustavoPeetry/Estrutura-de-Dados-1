#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
    int info;
    struct Nodo *prox;
}nodo;


nodo *InsereFim(nodo *lista, int x)
{
    nodo *novo = (nodo *)malloc(sizeof(novo));
    novo->info = x;
    novo->prox = NULL; //prox será vazio pois é no final

    if(lista == NULL) // se a lista estiver vazia, o novo nó é a própria lista
        return novo;

    nodo* temp = lista;
    while(temp->prox != NULL)
        temp = temp->prox;


    temp->prox = novo;


    return lista;
}



int main()
{
    int i;
    nodo *lista = NULL;

    for(i = 0; i<10; i++)
    {
        lista = InsereFim(lista, 25);
    }


    nodo* temp = lista;
    while(temp != NULL)
    {
        printf("%d ", &temp->info);
        temp = temp->prox;
    }

    while (lista != NULL)
    {
        temp = lista;
        lista = lista->prox;
        free(temp);
    }


    return 0;
}


