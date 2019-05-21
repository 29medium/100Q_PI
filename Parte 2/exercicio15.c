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
