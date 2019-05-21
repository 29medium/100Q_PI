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
