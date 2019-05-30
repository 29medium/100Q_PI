#include <stdio.h>
#include <stdlib.h>

int iguaisAB (ABin a, ABin b) 
{
    if (a==NULL && b==NULL) return 1;
    
    else if (a==NULL && b!=NULL) return 0;
    
    else if (a!=NULL && b==NULL) return 0;
    
    else if (a->valor != b->valor) return 0;

    else return iguaisAB(a->dir, b->dir) * iguaisAB(a->esq, b->esq);
}
