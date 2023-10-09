#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int busca(int *v, int N, int x)
{
    if(N <= 0)
    {
        return 0;
    }

     if (v[N - 1] == x)
    {
        return 1;
    }
    else
    {
        return busca(v, N - 1, x);
    }
}



int main()
{

    int *vet;
    int tam;
    int val;

    printf("Digite o tamanho do vetor ");
    scanf("%d", &tam);

    if (tam <= 0)
    {
        printf("Tamanho do vetor deve ser maior que zero.\n");
        return 1;
    }

    vet = (int*)malloc(tam * sizeof(int));

    for(int i=0; i<tam; i++)
    {
        scanf("%d", &vet[i]);
    }

    srand(time(NULL));

    val = vet[(rand() % tam)];

    if(busca(vet, tam, val))
    {
        printf("O valor %d foi encontrado no vetor.\n", val);
    }
    else
    {
        printf("O valor %d não foi encontrado no vetor.\n", val);
    }


    free(vet);


    return 0;
}


