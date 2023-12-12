#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 999

typedef struct Nodo{
    int info;
    struct Nodo *prox;
}nodo;


typedef struct Pilha{
    nodo *topo;
} pilha;

pilha* cria_pilha()
{
    pilha* p = (pilha*)malloc(sizeof(pilha));
    p -> topo = -1;
    return p;
}


int vazia(pilha* p)
{
    return (p->topo == -1) ? 1 : 0;
}

void push(pilha* p, int x)
{
    nodo *novo = (nodo*)malloc(sizeof(nodo));
    novo->info = x;
    novo->prox = p->topo;
    p->topo = novo;
}

int pop(pilha* p)
{
    int x = p->topo->info;
    nodo *aux = p->topo->prox;
    free(p->topo);
    p->topo = aux;
}

int topo(pilha* p)
{
    int x = p->topo->info;
    return x;
}

void clear(pilha *p)
{
    while(!vazia(p))
        pop(p);
}

int main()
{
    pilha *p = cria_pilha();

    int val;
    char op[6];

    while(strcmp(op,"F") != 0 && strcmp(op,"f") != 0)
    {
        scanf("%s",op);
        if (strcmp(op, "push") == 0)
        {
            scanf("%d", &val);
            push(p, val);
        }

        if (strcmp(op, "pop") == 0)
        {
            pop(p);
        }
    }

    clear(p);

    /*while(!vazia(p))
    {
        printf("%d \n", pop(p));
    }*/


    free(p);
    return 0;
}
