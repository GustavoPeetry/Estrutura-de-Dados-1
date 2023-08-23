#include <stdio.h>



int fibonacci(int n)
{
    if (n==0 || n==1)
        return n;

    return fibonacci(n-1) + fibonacci(n-2);


}


int main()
{
    int n[10];

    for (int i = 0; i < 10; i++)
    {
        n[i] = i;
        printf("%d \n", fibonacci(n[i]));
    }

    return 0;
}
