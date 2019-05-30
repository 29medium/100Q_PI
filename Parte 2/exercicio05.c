#include <stdio.h>
#include <stdlib.h>

void insertOrd (LInt *l, int x)
{
    LInt curr = *l;
    LInt prev;
    
    if (curr == NULL)
    {
        *l = newLInt(x, NULL);
        return;
    }
    
    if (x <= (*l)->valor)
    {
        *l = newLInt(x, *l);
        return;
    }
    
    while(curr!=NULL && x>curr->valor)
    {
        prev = curr;
        curr = curr->prox;
    }
    
    prev->prox = newLInt (x, curr);
}
