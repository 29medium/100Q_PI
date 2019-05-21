#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

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

int maximo (LInt l)
{
    int max=l->valor;
    
    while(l!=NULL)
    {
        if(l->valor > max) max=l->valor;
        
        l=l->prox;
    }
    
    return max;
}
