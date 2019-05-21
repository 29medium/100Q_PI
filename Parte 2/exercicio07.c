#include <stdio.h>
#include <stdlib.h>

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

void merge (LInt *r, LInt l1, LInt l2)
{
    *r = newLInt(0, NULL);
    LInt curr = *r;
    
    while (l1 != NULL && l2 != NULL)
    {
        if (l1->valor <= l2->valor)
        {
            curr->prox = l1;
            l1=l1->prox;
            curr=curr->prox;
        }
        else
        {
            curr->prox = l2;
            l2=l2->prox;
            curr=curr->prox;
        }
    }
    
    if (l1 == NULL) curr->prox = l2;
    
    else if (l2 == NULL) curr->prox = l1;
    
    curr = *r;
    *r = (*r)->prox;
    free(curr);
}
