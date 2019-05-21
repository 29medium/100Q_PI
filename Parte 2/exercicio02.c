#include <stdio.h>
#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

void freeL (LInt l)
{
    LInt aux;
    
    while (l!=NULL)
    {
        aux=l;
        l=l->prox;
        free(aux);
    }
}
