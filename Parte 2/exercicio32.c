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

void preorder (ABin a, LInt * l) 
{
    if (a!=NULL)
    {
        acLInt(a->valor, l);
        preorder (a->esq, l);
        preorder (a->dir, l);
    }
}

// Testes estao incorretos porque l não está inicializado a NULL, mas a função está correta
