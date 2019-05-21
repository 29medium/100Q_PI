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

int remrep (LInt *l, int x)
{
    int k=1, cont;
    LInt aux=*l, prev;
    
    while(aux!=NULL)
    {
        if(aux->valor == x)
        {
            if(k==0)
            {
                aux = aux->prox;
                prev->prox=aux;
                cont ++;
            }
            else
            {
                prev=aux;
                aux=aux->prox;
                k--;
            }
        }
        else
        {
            prev=aux;
            aux=aux->prox;
        }
    }
    return cont;
}

int removeDups (LInt *l)
{
    LInt aux = *l;
    int cont=0, x;
    
    while(aux!=NULL)
    {
        x = remrep(&aux, aux->valor);
        cont += x;
        aux=aux->prox;
    }
    
    return cont;
}
