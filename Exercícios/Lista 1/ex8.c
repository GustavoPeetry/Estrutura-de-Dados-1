#include <stdio.h>


int quant(int num)
{
    if (num < 10)
    {
        return 1;
    }

    else
    {
        return 1 + quant(num / 10);
    }

}



int main()
{
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    int res = quant(valor);
    printf("%d", res);



    return 0;
}
