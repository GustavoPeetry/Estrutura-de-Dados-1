#include <stdio.h>

int imprimedigitosinv(int num)
{
    if (num < 10)
        printf("%d\n", num);
    else
    {
        int digito = num % 10;
        printf("%d\n", digito);
        imprimedigitosinv(num / 10);
    }



}



int main()
{
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    imprimedigitosinv(valor);



    return 0;
}
