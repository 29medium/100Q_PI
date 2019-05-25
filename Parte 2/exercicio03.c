#include <stdio.h>
#include <stdlib.h>

void imprimeL (LInt l)
{
    while(l!=NULL)
    {
        printf("%d\n", l->valor);

        l = l->prox;
    }
}
