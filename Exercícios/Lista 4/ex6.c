#include <stdio.h>
#include <stdlib.h>


typedef struct Nodo {
    int info;
    struct Nodo* prox;
} nodo;

nodo *insereFimRecursivo(nodo *lista, int x)
{
    //caso base
    if (lista == NULL)
    {
        nodo* novo = (nodo*)malloc(sizeof(nodo));
        novo->info = x;
        novo->prox = NULL;
        return novo;
    }

    //caso recursivo
    lista->prox = insereFimRecursivo(lista->prox, x);
    return lista;
}

int main() {
    int i;
    nodo* lista = NULL;  // Inicializa a lista

    for (i = 0; i < 10; i++) {
        lista = insereFimRecursivo(lista, 25+i);
    }

    // Impressão da lista após inserção
    nodo* temp = lista;
    while (temp != NULL) {
        printf("%d ", &temp->info);
        temp = temp->prox;
    }

    // Libera a memória alocada para cada nó
    while (lista != NULL) {
        temp = lista;
        lista = lista->prox;
        free(temp);
    }

    return 0;
}
