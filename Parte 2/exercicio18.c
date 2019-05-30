#include <stdio.h>
#include <stdlib.h>

int maximo (LInt l)
{
    int max=l->valor;
    
    while(l!=NULL)
    {
        if(l->valor >= max) max=l->valor;
        
        l=l->prox;
    }
    
    return max;
}
