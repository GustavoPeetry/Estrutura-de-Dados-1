#include <stdio.h>

void selectionsort(int v[], int tam)
{
    int i, j, min, a;

    for(i = 0; i < (tam-1); i++)
    {
        min = i;

        for (j = (i+1); j < tam; j++)
        {
            if(v[j] < v[min])
                min = j;
        }
        if (i != min)
        {
            a = v[i];
            v[i] = v[min];
            v[min] = a;
        }
    }
}



int main()
{
    int tam;

    printf("Digite o tamanho do vetor");
    scanf("%d", &tam);

    int v[tam];

    for(int i = 0; i<tam; i++)
    {
        scanf("%d", &v[i]);
    }

    selectionsort(v, tam);

    for(int i = 0; i<tam; i++)
    {
        printf("%d \n", v[i]);
    }


    return 0;
}
