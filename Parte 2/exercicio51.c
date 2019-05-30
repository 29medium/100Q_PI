#include <stdio.h>
#include <stdlib.h>

int minValue (ABin a)
{
    if (a->esq == NULL) return a->valor; 
    
    else return minValue(a->esq);
}

int maxValue (ABin a)
{
    if (a->dir == NULL) return a->valor; 
    
    else return maxValue(a->dir);
}

int deProcura (ABin a) 
{
    if (a==NULL) return 1;
    
    if (a->esq!=NULL && maxValue(a->esq) > a->valor) return 0;
    
    else if (a->dir!=NULL && minValue(a->dir) < a->valor) return 0;
    
    else if (!deProcura(a->esq) || !deProcura(a->dir)) return 0;
    
    return 1;
}
