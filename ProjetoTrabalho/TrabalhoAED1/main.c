#include "PD.h"
#include "FE.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define NUM_BALDES 10
#define MAX_TAM 100

void sort(int* vet )
{
    int qntdN = 0;
    //cria os baldes com base no nb
    fila** buckets = (fila**)malloc(NUM_BALDES*sizeof(fila*));
    int i = 0, j = 0,k = 0, a = 0, aux = 0, divisor = 0, aux2 = 0;



    for(i=0;i<MAX_TAM;i++)
    {
        if(vet[i]==-1) break;
        qntdN++;
    }

    //inicializa cada balde de maneira vazia
    for (i = 0; i < NUM_BALDES; ++i)
        buckets[i] = cria_fila();


    //Encontrando o maior número
    for(i = 0;i < qntdN ;i++)
        if(vet[i]>aux) aux = vet[i];

    //Identificando a quantidade de casas decimais máxima
    while(aux>1)
    {
        aux = aux/10;
        k++;
    }

    //imprime o vetor original (iteração 0).
    printf("[");
    for(j = 0; j < qntdN; j++)
        {
            if(j==qntdN-1)
                printf("%d", vet[j]);
            else
                printf("%d ", vet[j]);
        }
    printf("] =>\n");


    //forzao que roda k vezes (qntd de casa decimais max)
    for(i = 1; i <= k ;i++)
    {
        divisor = 1;
        //encontrando a potenciação
        for(aux2 = 1; aux2 < i;aux2++)
            divisor = divisor * 10;

        printf("[");
        for(j = 0; j < qntdN; j++)
        {
            aux = vet[j];
            aux = aux / divisor;
            aux = aux % 10;



            //armazena no balde x em que x é o resto da divisão de n/10^k
            push_fila(buckets[(aux)], vet[j]);
        }

        //enquanto o bucket não estiver vazio, desenfilere do primeiro balde ao último
        //ordenando-o a respectiva casa correspondente (U, D, C, M)
        for(j = 0; j < NUM_BALDES; j++)
        {
            while(vazia_fila(buckets[j])==0)
            {
                vet[a] = pop_fila(buckets[j]);
                a++;
            }
        }

        //imprime o vetor se organizando até estar sortado
        for(j = 0; j < qntdN; j++)
        {
            if(j==qntdN-1)
                printf("%d", vet[j]);
            else
                printf("%d ", vet[j]);
        }

        //baguietes bonitinhos
        if(i < k)
            printf("] =>");
        else
            printf("].");
        printf("\n");

        //reinicializar a
        a=0;
    }

    //limpar a memória alocada de cada fila, e do buckets subsequentemente.
    for (i = 0; i < NUM_BALDES; ++i)
        free(buckets[i]);
    free(buckets);
}

int main()
{
    int *vet = (int*)malloc(MAX_TAM*sizeof(int));
    int valor, i, a = 0;


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
                printf("Pilha vazia.\n");
                a = 0;
            }
            else
                {
                    sort(r);
                    free(r);
                    a--;
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
            a++;
            push_pilha(p, vet, i);
        }
    }
    printf("%d vetores sem ordenar.", a);

    free(vet);
    free(p);
    return 0;
}
