#include <stdio.h>

void imprimeDigitosInv(int N)
{
    if (N <= 10)
    {
        printf("%d\n", N);
    }
    else
    {
        imprimeDigitosInv(N / 10);
        printf("%d\n", N % 10);
    }
}

int main()
{
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    imprimeDigitosInv(valor);

    return 0;
}
