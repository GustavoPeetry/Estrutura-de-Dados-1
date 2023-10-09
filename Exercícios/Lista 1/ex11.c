#include <stdio.h>


int imprimebinario(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        imprimebinario(n/2);
        printf("%d", n%2);
    }



}




int main()
{
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    imprimebinario(valor);


    return 0;
}
