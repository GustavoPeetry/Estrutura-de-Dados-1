#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 999


typedef struct Fila{
    int v[MAX];
    int ini;
    int fim;
} fila;


fila *cria_fila()
{
    fila *f = (fila*)malloc(sizeof(fila));
    f->ini = f->fim = 0;
}


int vazia(fila *f)
{
    return f->ini == f->fim ? 1 : 0;
}

void push(fila *f, int x)
{
    f->v[f->fim] = x;
    f->fim = (f->fim+1)%MAX;
}

int pop(fila *f)
{
    int x = f->v[f->ini];
    f->ini = (f->ini + 1)%MAX;

    return x;
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


    while(!vazia(f))
    {
        printf("%d \n", pop(f));
    }



    return 0;
}
