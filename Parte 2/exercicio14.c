#include <stdio.h>
#include <stdlib.h>

typedef struct lligada {
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
