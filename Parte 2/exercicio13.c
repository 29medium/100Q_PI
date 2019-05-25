#include <stdio.h>
#include <stdlib.h>

void init (LInt *l)
{
    LInt aux=*l, prev; 
    
    if ((*l)->prox==NULL)
    {
        *l=(*l)->prox;
        return;
    }
    
    while (aux->prox!=NULL)
    {
        prev = aux;
        aux = aux->prox;
    }
    
    prev->prox=NULL;
}
