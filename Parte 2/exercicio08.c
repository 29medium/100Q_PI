#include <stdio.h>
#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

LInt newLInt (int v, LInt t)
{
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) 
    {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

// Não totamente correto

void splitQS (LInt l, int x, LInt *mx, LInt *Mx)
{
    LInt currM, currm;
    
    while(l!=NULL)
    {
        if(l->valor < x)
        {
            if(*mx==NULL)
            {
                *mx=l;
                currm = *mx;
                currm->prox=NULL;
            }
            else
            {
                currm->prox = l;
                currm = currm->prox;
                currm->prox=NULL;
            }
        }
        else
        {
            if(*Mx==NULL)
            {
                *Mx=l;
                currM = *Mx;
                currM->prox=NULL;
            }
            else
            {
                currM->prox = l;
                currM = currM->prox;
                currM->prox=NULL;
            }
        }
        l=l->prox;
    }
}
