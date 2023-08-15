#include <stdio.h>
#include <string.h>

int comparador(char *str1, char *str2)
{
    int i, j;

    for (i = 0; i <= strlen(str2) - strlen(str1); i++)
    {
        for (j = 0; j < strlen(str1); j++)
        {
            if (str2[i + j] != str1[j])// se o tamanho somado de i + j de str2 e diferente do tamanho da str1 ele sai
                break;
        }
        if (j == strlen(str1))
            return 1; // encontrou a substring
    }

    return 0; // Não encontrou a substring
}

int main()
{
    char str1[100] = "bacia";
    char str2[100] = "aaaaaa";


    printf("%d", comparador(str1, str2));

    return 0;
}
