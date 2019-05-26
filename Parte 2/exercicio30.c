#include <stdio.h>
#include <stdlib.h>

void mirror (ABin *a) 
{
    ABin aux=NULL;
    
    if (*a != NULL)
    {
       aux = (*a)->esq;
        (*a)->esq = (*a)->dir;
        (*a)->dir = aux;
    
        mirror(&((*a)->dir));
        mirror(&((*a)->esq)); 
    }
}
