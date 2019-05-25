//Inacabado

#include <stdio.h>
#include <stdlib.h>

int drop (int n, LInt *l)
{
    int i;
    LInt aux=*l;
    
    for(i=0; i<(n-1) && aux!=NULL; i++)
    {
        aux=*l;
        *l=(*l)->prox;
        free(*l);
    }
    
    return i;
}
