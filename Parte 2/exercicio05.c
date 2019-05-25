#include <stdio.h>
#include <stdlib.h>

void insertOrd (LInt *l, int x)
{
    LInt curr = *l;
    LInt prev, new;
    
    if (curr == NULL)
    {
        new = newLInt(x, NULL);
        *l = new;
        return;
    }
    
    if (x <= (*l)->valor)
    {
        new = newLInt(x, *l);
        *l = new;
        return;
    }
    
    while(curr!=NULL)
    {
        if (x<=curr->valor)
        {
            new = newLInt(x, curr);
            prev->prox = new;
            break;
        }
        
        prev = curr;
        curr = curr->prox;
    }
    
    if (curr==NULL)
    {
        new = newLInt(x, NULL);
        prev->prox = new;
    }
}
