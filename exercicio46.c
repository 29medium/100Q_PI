#include <stdio.h>
#include <stdlib.h>

int cardinalMSet (int N, int v[N])
{
    int i, soma=0;
    
    for(i=0; i<N; i++)
    {
        soma+=v[i];
    }
    
    return soma;
}
