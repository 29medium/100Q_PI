#include <stdio.h>
#include <stdlib.h>

void splitQS (LInt l, int x, LInt *mx, LInt *Mx)
{
    *mx = newLInt(0, NULL), *Mx = newLInt(0, NULL);
    LInt auxm = *mx, auxM = *Mx;
    
    while(l!=NULL)
    {
        if(l->valor < x)
        {
            auxm->prox = l;
            auxm = auxm->prox;
            l = l->prox;
            auxm->prox=NULL;
        }
        else
        {
            auxM->prox = l;
            auxM = auxM->prox;
            l=l->prox;
            auxM->prox=NULL;
        }
    }
    *mx = (*mx)->prox;
    *Mx = (*Mx)->prox;
}
