#include <stdio.h>
#include <stdlib.h>

// Not Working

LInt somasAcL (LInt l) 
{
    LInt aux=l;
    int soma=0, val;
    
    while(aux!=NULL)
    {
        aux->valor = val;
        aux->valor += soma;
        soma += val;
        aux = aux->prox;
    }
    
    return l;
}
