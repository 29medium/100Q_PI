#include <stdio.h>
#include <stdlib.h>

void remreps (LInt l)
{
    if (l==NULL) return;
    
    if (l->prox == NULL) return;
    
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
            prev=aux;
            aux=aux->prox;
        }
    }
}
