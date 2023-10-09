#include <stdio.h>

int potencia(int N, float X)
{
    if(N == 0)
    {
        return 1;
    }
    else
    {
        return X * potencia(N - 1, X);
    }
}



int main()
{
    int expoente;
    float valor;

    printf("Digite um valor: ");
    scanf("%f", &valor);
    printf("Digite um valor: ");
    scanf("%d", &expoente);

    float res = potencia(expoente, valor);
    printf("%f", res);


    return 0;
}
