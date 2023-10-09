#include <stdio.h>
#include <stdlib.h>

int soma(int *v, int N)
{
    if(N <= 0)
    {
        return 0;
    }
    else
    {
        return v[N - 1] + soma(v, N - 1);
    }
}



int main()
{

    int *vet;
    int tam;
    int tot;

    printf("Digite o tamanho do vetor ");
    scanf("%d", &tam);

    vet = (int*)malloc(tam * sizeof(int));

    for(int i=0; i<tam; i++)
    {
        scanf("%d", &vet[i]);
    }

    tot = soma(vet, tam);

    printf("a soma eh %d", tot);

    free(vet);


    return 0;
}

