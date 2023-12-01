#include "PE.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    pilha *p = cria_pilha();
    char op[6];

    while(strcmp(op,"F") != 0){

    if (strcmp(op, "pop") == 0){

    }

    if (strcmp(op, "push") == 0){
        int vet[100];
        int valor, i = 0;
        while (1){
            scanf("%d",&valor);
            if(valor > -1){
                vet[i] = valor;
                i++;
            }
            else{
                vet[i] = valor;
                break;
            }
        }
        push_pilha(&p, &vet);
    }

    scanf("%s",op);
    }

    free(p);
    return 0;
}
