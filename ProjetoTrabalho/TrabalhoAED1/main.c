#include "PE.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    pilha *minhaPilha;
    cria_pilha(&minhaPilha);

    push_pilha(minhaPilha, 42);
    push_pilha(minhaPilha, 17);

    printf("Topo da pilha: %d\n", pop_pilha(minhaPilha));
    printf("Topo da pilha: %d\n", pop_pilha(minhaPilha));


    return 0;
}
