#include <stdio.h>
#include <stdlib.h>

int quantosMaiores (ABin a, int x) 
{
    int cont=0;
    
    if (a==NULL) return 0;
    
    if (a->valor > x) cont=1;
    
    return (cont + quantosMaiores(a->esq, x) + quantosMaiores(a->dir, x));
}
