#include <stdio.h>
#include <stdlib.h>

int addOrd (ABin *a, int x) 
{
    ABin new = (ABin) malloc(sizeof(ABin));
    new->valor = x;
    new->esq = NULL;
    new->dir = NULL;
    
    if ((*a)==NULL) 
    {
        (*a) = new;
        return 0;
    }
    
    ABin aux = (*a), prev;
    
    while(aux != NULL)
    {
        if(x==aux->valor) return 1;
        
        prev=aux;
        
        if(x<aux->valor) aux=aux->esq;
        else aux=aux->dir;
    }
    
    if (x < prev->valor) prev->esq = new;
    
    else prev->dir = new;
    
    return 0;
}
