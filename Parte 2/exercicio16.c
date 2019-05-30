#include <stdio.h>
#include <stdlib.h>

LInt cloneL(LInt l)
{
    LInt start;
    LInt auxS = start, new;
    
    while(l!=NULL)
    {
        new = newLInt(l->valor, NULL);
        auxS->prox=new;
        auxS = auxS->prox;
        l=l->prox;
    }
    
    return start->prox;
}
