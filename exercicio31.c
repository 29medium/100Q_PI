#include <stdio.h>
#include <stdlib.h>

int maisFreq (int v[], int N)
{
    int i, j, max=v[0], n=1, cont;
    
    for(i=0; i<N; i++)
    {
        cont=0;
        
        for(j=0; j<N; j++)
        {
            if (v[j]==v[i]) cont++;
        }
        
        if (cont>n)
        {
            n=cont;
            max=v[i];
        }
    }
    return max;
}
