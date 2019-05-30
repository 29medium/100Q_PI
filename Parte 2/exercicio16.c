#include <stdio.h>
#include <stdlib.h>

LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

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
