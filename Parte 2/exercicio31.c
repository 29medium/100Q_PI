#include <stdio.h>
#include <stdlib.h>

LInt mynewLInt (int v, LInt t)
{
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) 
    {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

void acLInt(int x, LInt * l)
{
    LInt aux = (*l), new = mynewLInt(x,NULL);
    
    if((*l)==NULL) 
    {
        *l = new;
        return;
    }
    
    while (aux->prox != NULL) aux = aux->prox;
    
    aux->prox = new;
}

void inorder (ABin a, LInt * l) 
{
    if (a != NULL)
    {
        inorder(a->esq, l);
        acLInt(a->valor, l);
        inorder(a->dir, l);
    }
}
