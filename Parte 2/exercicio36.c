#include <stdio.h>
#include <stdlib.h>

int pruneAB (ABin *a, int l) 
{
    if(*a==NULL) return 0;
    
    if (l>0) return (pruneAB (&((*a)->esq), l-1) + pruneAB (&((*a)->dir), l-1));
    
    else 
    {
        int res = 1 + pruneAB (&((*a)->esq), 0) + pruneAB (&((*a)->dir), 0);
        free(*a);
        *a=NULL;
        return res;
    }
}
