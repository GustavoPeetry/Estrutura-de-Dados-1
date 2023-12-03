#include "PD.h"
#include "FE.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bucketsort(p, int vet)
{

}

void radixsort(p, vet)
{

}


int main()
{
    int *vet[MAX_TAM];
    int valor, i = 0;

    pilha *p = cria_pilha();
    char op[6];

    while(strcmp(op,"F") != 0 && strcmp(op,"f") != 0)
    {
        scanf("%s",op);
        if (strcmp(op, "pop") == 0)
        {
            int *r = pop_pilha(p);
            if (r == NULL)
            {
                printf("Pilha vazia...\n");
            }
            else
                {
                    printf("endereco de memoria excluido %d\n", r);
                }
        }

        if (strcmp(op, "push") == 0)
        {
            i = 0;
            while (1)
            {
                scanf("%d",&valor);
                if(valor > -1)
                {
                    vet[i] = valor;
                    i++;
                }
                else
                {
                    vet[i] = valor;
                    break;
                }
            }
            push_pilha(p, vet);
        }
    }

    free(vet);
    free(p);
    return 0;
}
