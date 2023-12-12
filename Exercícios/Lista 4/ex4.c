#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
    int info;
    struct Nodo *prox;
}nodo;


nodo *insereInicio(nodo *lista, int x)
{
    nodo *novo = (nodo *)malloc(sizeof(novo));
    novo->info = x;
    novo->prox = lista;


    return novo;
}



int main()
{
    int i;
    nodo *lista = NULL;

    for(i = 0; i<10; i++)
    {
        lista = insereInicio(lista, 25);
    }


    nodo* temp = lista;
    while(temp != NULL)
    {
        printf("%d ", temp->info);
        temp = temp->prox;
    }

    while (lista != NULL)
    {
        temp = lista;
        lista = lista->prox;
        free(temp);
    }



    free(lista);
    return 0;
}

