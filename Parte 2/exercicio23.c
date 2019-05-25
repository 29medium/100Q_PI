#include <stdio.h>
#include <stdlib.h>

LInt arrayToList (int v[], int N)
{
    int i;
    LInt l=newLInt(v[0],NULL), aux=l;
    
    if (N==0) return NULL;
    
    for(i=1; i<N; i++)
    {
        aux->prox = newLInt(v[i], NULL);
        aux = aux->prox;
    }
    
    return l;
}
