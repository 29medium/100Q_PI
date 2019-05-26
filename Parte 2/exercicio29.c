#include <stdio.h>
#include <stdlib.h>

ABin cloneAB (ABin a) 
{
    ABin clone=NULL;
    
    if (a != NULL)
    {
        clone = (ABin) malloc (sizeof (struct nodo));
        clone->valor = a->valor;
        clone->esq = cloneAB(a->esq);
        clone->dir = cloneAB(a->dir);
    }
    
    return clone;
}
