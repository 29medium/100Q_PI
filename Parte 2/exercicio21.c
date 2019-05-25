#include <stdio.h>
#include <stdlib.h>

LInt NForward (LInt l, int N)
{
    LInt aux=l;
    
    for( ;N!=0;N--) aux=aux->prox;
    
    return aux;
}
