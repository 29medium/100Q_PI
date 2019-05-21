#include <stdio.h>
#include <stdlib.h>

typedef struct lligada 
{
    int valor;
    struct lligada *prox;
} *LInt;

LInt newLInt (int v, LInt t)
{
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) 
    {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

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
