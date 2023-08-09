#include <stdio.h>


int main()
{

    int n, soma = 0;
    double i, res;

    while(n != -1)
    {
        soma += n;
        printf("%d\n", soma);
        printf("Digite um numero\n");
        scanf("%d", &n);
        i++;
    }
    res = soma / (i - 1);
    printf("%lf", res);
    return 0;
}
