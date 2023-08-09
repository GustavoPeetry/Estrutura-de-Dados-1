#include <stdio.h>


int main()
{
    int tam;
    int soma = 0;


    printf("Digite o tamanho do vetor");
    scanf("%d", &tam);

    int n[tam];

    for(int i = 0 ; i < tam; i++)
    {
        printf("digite um valor");
        scanf("%d", &n[i]);
    }

    for(int i = 0 ; i < tam; i++)
        soma  += n[i];

    printf("%d", soma);

    return 0;
}
