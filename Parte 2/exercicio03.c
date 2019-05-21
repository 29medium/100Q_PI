#include <stdio.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

LInt newLInt (int, LInt);
int length (LInt l);

void imprimeL (LInt l)
{
    while(l!=NULL)
    {
        printf("%d\n", l->valor);

        l = l->prox;
    }
}
