#include <stdio.h>
#include <stdlib.h>


typedef struct Nodo{
    int info;
    struct Nodo *prox;
} nodo;

nodo *insereInicio(nodo *lista, int x)
{
    nodo *novo = (nodo *)malloc(sizeof(nodo));
    novo->info = x;
    novo->prox = lista;

    return novo;
}

nodo *busca(nodo *lista, int x)
{
    nodo *temp = lista;

    while(temp != NULL)
    {
        if(temp->info == x)
            return temp;

        temp = temp->prox;
    }

    return NULL;


}


int main()
{
    int i;
    nodo *lista = NULL;

    for(i = 0 ; i<10; i++)
    {
        lista = insereInicio(lista, i);
    }


    int procurado = 3;

    nodo* resultado = busca(lista, procurado);

    if (resultado != NULL)
        printf("achei");
    else
        printf("num achei nao papai");


    return 0;
}
