#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct PilhacGravidade{
    int vcima[MAX];
    int vbaixo[MAX];
    int up;
    int down;
} PcG;

// considerando que up e down comecem com valor -1


void pushUp(PcG *p, int x)
{
    p->up++;
    p->vcima[p->up] = x;
}

int popUp(PcG *p)
{
    int x = p->vcima[p->up];
    p->up--;

    return x;
}

void pushDown(PcG *p, int x)
{
    p->down++;
    p->vbaixo[p->down] = x;
}

int popDown(PcG *p)
{
    int x = p->vbaixo[p->down];
    p->down--;
}


int PcG_vazia(PcG *p)
{
    PcG *auxcima = NULL;
    PcG *auxbaixo = NULL;
    int i;
    while(1)
    {
        if(p->vcima[i])

    }

}
