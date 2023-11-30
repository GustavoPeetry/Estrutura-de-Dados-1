#ifndef PE
#define PE

#define MAX_TAM 100

typedef struct PE {
    int vet[MAX_TAM];
    int topo;
} PE;

void comecaPE(PE *p);
int estaVazia(PE *P);
int estaCheia(PE *p);
void push(PE *p, int x);
in


#endif // PE
