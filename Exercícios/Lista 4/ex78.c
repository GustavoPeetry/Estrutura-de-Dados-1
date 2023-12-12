#include <stdlib.h>
#include <stdio.h>

typedef struct Nodo{

    int info;
    struct Nodo *prox;

} nodo;

nodo *insereInicio(nodo *lista, int x)
{
    nodo *novo = (nodo *)malloc(sizeof(novo));
    novo->info = x;
    novo->prox = lista;


    return novo;
}

void imprime(nodo *lista)
{
    //caso base
    if (lista == NULL)
    {
        printf("Lista vazia \n");
        return;
    }



    //caso recursivo reverse
    nodo* temp = lista;
    while(temp != NULL)
    {
        printf("%d ", temp->info);
        temp = temp->prox;
    }
    printf("\n");


    //caso recursivo normal
    printf("%d ", lista->info);
    imprime(lista->prox);

}


int main()
{
    nodo *lista = NULL;
    int i;

    for(i = 0; i<10; i++)
    {
        lista = insereInicio(lista, i);
    }

    imprime(lista);
}
