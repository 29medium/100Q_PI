#include <stdio.h>
#include <stdlib.h>

LInt parteAmeio (LInt *l)
{
    int i, meio;
    LInt y, aux = *l;
    
    for(i=0; aux!=NULL; i++) aux=aux->prox;
    
    if(i==1) return NULL;
    
    meio = i/2;
    y=*l;
    aux=y;
    
    for(i=0; i+1 < meio; i++) aux=aux->prox;
    
    *l = aux->prox;
    aux->prox=NULL;
    return y;
}
