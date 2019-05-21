//Inacabado

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

int drop (int n, LInt *l)
{
    int i;
    LInt aux=*l;
    
    for(i=0; i<(n-1) && aux!=NULL; i++)
    {
        aux=*l;
        *l=(*l)->prox;
        free(*l);
    }
    
    return i;
}
