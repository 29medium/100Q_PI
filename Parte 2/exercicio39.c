#include <stdio.h>
#include <stdlib.h>

int nivelV (ABin a, int n, int v[]) 
{
    if (a==NULL) return 0;
    
    if (n==1) 
    {
        *v=a->valor;
        return 1;
    }
    
    else 
    {
        int pos = nivelV(a->esq, n-1, v);
        return pos + nivelV(a->dir, n-1, v+pos);
    }
}
