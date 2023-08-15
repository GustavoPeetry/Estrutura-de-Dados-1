#include <stdio.h>
#include <string.h>

int comparador(char *str1, char *str2)
{
    int i,j = 0;
    int retorno = 0;
    char maior[100];
    char menor[100];



    if (strlen(str1) <= strlen(str2))
        {
            strcpy(maior, str2);
            strcpy(menor, str1);
        }
    else
        {
            strcpy(maior, str1);
            strcpy(menor, str2);
        }


    for (i = 0 ; i < strlen(maior) ; i++ )
    {
        for(j = 0 ;  j < strlen(menor); j++)
        {
            if(maior[i] == menor[j])
                retorno = 1;
            else if(maior[i] != menor[j] && retorno == 1)
                return 0;
            else if(j == strlen(menor) && retorno == 1)
                {
                    printf("louco e sonhador");
                    return 1;
                }
        }
    }
}


int main()
{
    char str1[100] = "bacia";
    char str2[100] = "baciabas";


    printf("%d", comparador(&str1, &str2));

    return 0;
}
