#include <stdio.h>
#include <string.h>

int strcount(char *str)
{
    char letra = 'a';
    int i;



    for (i = 0 ; letra != '\0' ; i++)
    {
        letra = str[i];

    }

    return i;
}

int main()
{
    char string[100] = "aaaa";


    printf ("%d", strcount(&string) - 1);



    return 0;
}
