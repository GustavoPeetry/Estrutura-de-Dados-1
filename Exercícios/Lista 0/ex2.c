/*Escreva um programa em C que lˆe do usu´ario trˆes inteiros a, b e c e determina se existe um triˆangulo
cujos lados tˆem comprimento os valores lidos. Existe um triˆangulo de lados a, b e c se a ≥ b + c, b ≥ a + c
e c ≥ a + b.*/


#include <stdio.h>


int main()
{
    int a,b,c;

    printf("Digite a b c na ordem");
    scanf("%d %d %d", &a, &b, &c);


    if(a >= b+c || b >= a+c || c >= a+b)
        printf("Existe um triangulo");
    else
        printf("nao existe um triangulo");



    return 0;
}
