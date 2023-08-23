#include <stdio.h>

int elevacao(int n, int val)
{
    if (n==0)
        return 1;

    int x;
    x = elevacao(n-1, val);
    return x*val;
}



int main()
{
    int n = 4;
    int val = 2;

    printf("%d", elevacao(n, val));


    return 0;
}
