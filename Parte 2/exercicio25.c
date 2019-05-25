#include <stdio.h>
#include <stdlib.h>

// Incorreto

void remreps (LInt l)
{
    if (l==NULL) return NULL;
    
    LInt aux=l->prox, prev=l;
    
    while (aux!=NULL)
    {
        if(aux->valor == prev->valor)
        {
            prev->prox = aux->prox;
            free(aux);
            aux = prev->prox;
        }
        else
        {
            prev->prox=aux;
            aux=aux->prox;
        }
    }
}
