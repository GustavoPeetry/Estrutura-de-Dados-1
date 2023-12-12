#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 999

typedef struct Nodo{
    int info;
    struct Nodo *prox;
} nodo;


typedef struct Fila{
    nodo *ini;
    nodo *fim;
} fila;


fila *cria_fila()
{
    fila *f = (fila*)malloc(sizeof(fila));
    f->ini = f->fim = 0;
}


int vazia(fila *f)
{
    if((f->ini == NULL) || (f->fim == NULL))
        return 1;
    else return 0;
}

void push(fila *f, int x)
{
    nodo *novo = (nodo*)malloc(sizeof(nodo));
    novo->info = x;
    novo->prox = NULL;
    if (f->fim != NULL)
        f->fim->prox = novo;
    f->fim = novo;
    if(f->ini==NULL)
        f->ini = novo;
}

int pop(fila *f)
{
    int x = f->ini->info;
    nodo *aux = f->ini->prox;
    if(f->fim == f->ini)
        f->fim = NULL;
    free(f->ini);
    f->ini = aux;
    return x;
}

void clear(fila *f)
{
    while(!vazia(f))
        pop(f);
}

void reverse(fila *f)
{
    int vet[MAX];
    int i = -1;

    while(!vazia(f))
    {
        i++;
        vet[i] = pop(f);
    }

    for(; i>=0; i--)
    {
        push(f, vet[i]);
        //printf("%d \n", vet[i]);
    }
}

int main()
{
    fila *f = cria_fila();

    int val;
    char op[6];

    while(strcmp(op,"F") != 0 && strcmp(op,"f") != 0)
    {
        scanf("%s",op);
        if (strcmp(op, "push") == 0)
        {
            scanf("%d", &val);
            push(f, val);
        }

        if (strcmp(op, "pop") == 0)
        {
            pop(f);
        }
    }


    printf("%d \n", f->ini->info);

    reverse(f);

    printf("%d", f->ini->info);



    return 0;
}

