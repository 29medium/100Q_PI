#include <stdio.h>
#include <stdlib.h>

int freeAB (ABin a) 
{
    if (a==NULL) return 0;
    
    ABin auxEsq = a->esq;
    ABin auxDir = a->dir;
    
    free(a);

    return (1 + freeAB(auxEsq) + freeAB(auxDir));
}
