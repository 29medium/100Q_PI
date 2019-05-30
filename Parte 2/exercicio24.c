#include <stdio.h>
#include <stdlib.h>

LInt somasAcL (LInt l) 
{
    if (l==NULL) return NULL;
    
    if (l->prox==NULL) return newLInt(l->valor, NULL);
    
    LInt aux = l, start=newLInt(0, NULL), res=start;
    int soma = 0;
    
    while (aux!=NULL)
    {
        soma += aux->valor;
        res->prox = newLInt(soma, NULL);
        aux = aux-> prox;
        res=res->prox;
    }
    
    return start->prox;
}
