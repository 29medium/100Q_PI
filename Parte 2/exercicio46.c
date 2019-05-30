#include <stdio.h>
#include <stdlib.h>

int depthOrd (ABin a, int x) 
{
    if (a==NULL) return -1;
    
    int i;
    
    for (i=1; a!=NULL; i++)
    {
        if (a->valor == x) return i;
        
        else if (a->valor > x) a = a->esq;
        
        else a = a-> dir;
    }
    
    return -1;
}
