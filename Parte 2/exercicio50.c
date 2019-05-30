#include <stdio.h>
#include <stdlib.h>

int length(LInt l)
{
    int i;
    
    for (i=0; l!=NULL; i++) l = l->prox;
    
    return i;
}

LInt parte (LInt l, int * x)
{
    if (l == NULL) return NULL;
    
    int meio = length(l)/2;
    LInt l2, aux=l;
    
    while (meio!=0)
    {
        aux = l;
        l = l->prox;
        meio--;
    }
    
    *x = l->valor;
    l2 = l->prox;
    aux->prox = NULL;
    return l2;
}

void listToBTree (LInt l, ABin *a) 
{
    if(l==NULL) 
    {
        (*a)==NULL;
        return;
    }
    
    if(l->prox==NULL)
    {
        *a = (ABin) malloc(sizeof(ABin));
        (*a)->valor=l->valor;
        (*a)->esq=NULL;
        (*a)->dir=NULL;
        return;
    }
    
    LInt l1=l, l2;
    int x;
    
    l2 = parte(l1, &x);
    
    *a = (ABin) malloc(sizeof(ABin));
    (*a)->valor = x;
    (*a)->esq=NULL;
    (*a)->dir=NULL;
    
    listToBTree (l1, &(*a)->esq);
    listToBTree (l2, &(*a)->dir);
}
