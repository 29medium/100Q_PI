#include <stdio.h>
#include <stdlib.h>

void niv (LInt *b, ABin a, int n)
{
    if (a==NULL) return;
    
    if (n==1)
    {
        LInt new = (LInt) malloc(sizeof(struct lligada));
	    new->valor = a->valor;
	    new->prox = *b;
	    (*b) = new;
    }
    
    else
    {
        n--;
        niv (b, a->dir, n);
        niv (b, a->esq, n);
    }
}

LInt nivelL (ABin a, int n) 
{
    LInt l=NULL;
    
    niv (&l, a, n);
    
    return l;
}
