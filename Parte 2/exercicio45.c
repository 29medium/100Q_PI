#include <stdio.h>
#include <stdlib.h>

int lookupAB (ABin a, int x) 
{
    if (a==NULL) return 0;
    
    ABin aux = a;
    
    while (aux != NULL)
    {
        if (aux->valor == x) return 1;
        
        else if (x < aux->valor) aux = aux->esq;
        
        else aux = aux->dir;
    }
    return 0;
}
