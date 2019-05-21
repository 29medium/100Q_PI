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

int posMaior (LInt l)
{
    int i, posM=0, max= l->valor;
    LInt aux = l;
    
    for (i=0; aux!=NULL; i++)
    {
        if(aux->valor > max)
        {
            max = aux->valor;
            posM=i;
        }
        aux=aux->prox;
    }
    
    return posM;
}

int removeMaiorL (LInt *l)
{
    LInt aux=*l, prev;
    int valor, n=posMaior(aux);
    
    if(n==0)
    {
        valor = (*l)->valor;
        *l = (*l)->prox;
        return valor;
    }
    
    for(; n!=0; n--)
    {
        prev = aux;
        aux=aux->prox;
    }
    
    valor = aux->valor;
    prev->prox = aux->prox;
    
    return valor;
}
