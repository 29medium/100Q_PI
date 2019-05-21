#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

// Segmentation Fault

int removeOneOrd (LInt *l, int x)
{
    LInt curr = *l, prev;
    
    if(curr==NULL) return 1;
    
    else if(curr->prox==NULL && current->valor==x)
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
