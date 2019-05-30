#include <stdio.h>
#include <stdlib.h>

int deProcura (ABin a) 
{
    if (a==NULL) return 1;
    
    if (a->esq < a->valor && a->dir > a->valor) return deProcura(a->esq) * deProcura(a->dir);
    
    else if (a->dir > a->valor) return deProcura(a->dir);
    
    else if (a->esq < a->valor) return deProcura(a->esq);
    
    else if (a->esq == NULL && a->dir == NULL) return 1;
    
    else return 0;
}
