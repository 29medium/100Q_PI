#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

void remrep (LInt *l, int x)
{
    int k=1;
    LInt aux=*l, prev;
    
    while(aux!=NULL)
    {
        if(aux->valor == x)
        {
            if(i==0)
            {
                aux = aux->prox;
                prev->prox=aux;
            }
            else
            {
                prev=aux;
                aux=aux->prox;
                i--;
            }
        }
        else
        {
            prev=aux;
            aux=aux->prox;
        }
    }
}

int removeDups (LInt *l)
{
    
    
    return ;
}
