#include <stdio.h>
#include <stdlib.h>

int removeOneOrd (LInt *l, int x)
{
    LInt curr = *l, prev;
    
    if(curr==NULL) return 1;
    
    else if(curr->prox==NULL && curr->valor==x)
    {
        free(*l);
        *l = NULL;
        return 0;
    }
    
    while(curr!=NULL)
    {
        if(x==curr->valor)
        {
            prev->prox=curr->prox;
            free(curr);
            return 0;
        }
        prev = curr;
        curr = curr->prox;
    }
    
    return 1;
}
