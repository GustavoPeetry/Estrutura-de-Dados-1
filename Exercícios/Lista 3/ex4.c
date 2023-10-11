#include <stdio.h>


void trocarValores(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void selection_sort(int vet[10])
{
    int i, j = 0;
    int pos_menor = 0;
    for(i=0;i<10;i++)
    {
        pos_menor = i;
        for(j=i+1; j < 10; j++)
        {
            if(vet[j] < vet[pos_menor])
                pos_menor = j;
        }
        trocarValores(&vet[i], &vet[pos_menor]);
    }
}

void insertion_sort(int vet[10])
{
    int i, j;


    for(i=0; i<10; i++)
    {
        j=i;
        while(j-1 >= 0 && vet[j] < vet[j-1])
        {
            trocarValores(&vet[j], &vet[j-1]);
            j=j-1;
        }

    }
}

void bubble_sort(int vet[10])
{
    int i, j;

    for(i=0; i < 10; i++)
    {
        for(j=0; j<10-i-1; j++)
        {
            if(vet[j] > vet[j+1])
                trocarValores(&vet[j], &vet[j+1]);
        }
    }


}




int main()
{
    int vet1[10] = {1, 4, 74, 52, 99, 22, 45, 123, 23, 55};
    int vet2[10] = {1, 4, 74, 52, 99, 22, 45, 123, 23, 55};
    int vet3[10] = {1, 4, 74, 52, 99, 22, 45, 123, 23, 55};
    int vet4[10] = {1, 4, 74, 52, 99, 22, 45, 123, 23, 55};
    int vet5[10] = {1, 4, 74, 52, 99, 22, 45, 123, 23, 55};
    int vet6[10] = {1, 4, 74, 52, 99, 22, 45, 123, 23, 55};
    int vet7[10] = {1, 4, 74, 52, 99, 22, 45, 123, 23, 55};

    selection_sort(vet1);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vet1[i]);
    }

    printf("\n");

    insertion_sort(vet2);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vet2[i]);
    }

    printf("\n");

    bubble_sort(vet3);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vet3[i]);
    }





    return 0;
}
