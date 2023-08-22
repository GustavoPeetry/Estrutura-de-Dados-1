#include <stdio.h>


int fatorial(int n)
{
    if (n==0)
        return 1;

    int x;
    x = fatorial(n-1);
    return n*x;
}



int main()
{
    int n = 3;

    printf("%d", fatorial(n));


    return 0;
}
