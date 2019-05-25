#include <stdio.h>
#include <stdlib.h>

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

int take (int n, LInt *l)
{
    int i;
    LInt aux=*l, free;
    
    for(i=0; i<(n-1) && aux!=NULL; i++) aux=aux->prox;
    
    if (aux==NULL) return i;
    
    free = aux->prox;
    aux->prox = NULL;
    freeL(free);
    
    return i+1;
}
