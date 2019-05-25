#include <stdio.h>
#include <stdlib.h>

LInt reverseL (LInt l)
{
    LInt aux=l, next, prev=NULL;
    
    while(aux!=NULL)
    {
        next=aux->prox;
        aux->prox=prev;
        prev=aux;
        aux=next;
    }
    
    l = prev;
    
    return l;
}
