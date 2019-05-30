#include <stdio.h>
#include <stdlib.h>

int dumpAbin (ABin a, int v[], int N) 
{
    if (a==NULL) return 0;
    
    if (N==0) return 0;
    
    else
    {
        int pos=dumpAbin (a->esq, v, N-1);
        *(v + pos) = a->valor;
        return pos + 1 + dumpAbin (a->dir, v+pos+1, N-1-pos);
    }
}
