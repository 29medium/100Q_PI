#include <stdio.h>
#include <stdlib.h>

LInt rotateL (LInt l)
{
    if (l==NULL || l->prox==NULL) return l;

    LInt aux=l, newL=l;
    l = l->prox;
    
    while(aux->prox != NULL) aux=aux->prox;
    
    aux->prox=newL;
    newL->prox=NULL;
    
    return l;
}
