#include <stdio.h>
#include <stdlib.h>

void concatL (LInt *a, LInt b)
{
    LInt aux=*a;
    
    if(*a==NULL)
    {
        *a = b;
        return;
    }
    
    while(aux->prox!=NULL) aux=aux->prox;
    
    aux->prox=b;
}
