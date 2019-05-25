#include <stdio.h>
#include <stdlib.h>

void appendL (LInt *l, int x)
{
    LInt aux=*l;
    
    if (*l==NULL)
    {
        *l = newLInt (x, NULL);
        return;
    }
    
    while(aux->prox!=NULL) aux=aux->prox;
    
    aux->prox = newLInt (x, NULL);
}
