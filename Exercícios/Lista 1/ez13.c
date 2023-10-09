#include <stdio.h>

int potencia(int N, float X)
{
    float num;


    if(N == 0)
    {
        return 1;
    }

    if(N % 2 == 0 )
    {
        num = potencia(X, N / 2);
        return num * num;
    }
    else
    {
        num = potencia(X, N - 1);
        return X * num;
    }
}



int main()
{
    int expoente;
    float valor;

    printf("Digite um valor: ");
    scanf("%f", &valor);
    printf("Digite um expoente: ");
    scanf("%d", &expoente);

    float res = potencia(expoente, valor);
    printf("%f", res);


    return 0;
}

