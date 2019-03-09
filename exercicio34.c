#include <stdio.h>
#include <stdlib.h>

// Certo no terminal mas mal nos testes da codeboard

int elimRepOrd (int v[], int N)
{
    int i, j;
    
    for(i=0; i<N; i++)
    {
        if(v[i+1]==v[i])
        {
            for(j=i; j<N; j++) v[j]=v[j+1];
            N--;
            i--;
        }
    }
    return N;
}
