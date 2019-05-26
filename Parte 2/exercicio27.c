#include <stdio.h>
#include <stdlib.h>

LInt parte (LInt l)
{
    if (l==NULL || l->prox==NULL) return NULL;
    
    int i;
    LInt parInicio = newLInt(29, NULL);
    LInt imparInicio = newLInt(29, NULL);
    
    LInt par = parInicio;
    LInt impar = imparInicio;
    
    for(i=1; l!=NULL; i++)
    {
        if (i % 2 == 0)
        {
            par->prox = l;
            par = par->prox;
            l=l->prox;
            par->prox = NULL;
        }
        else
        {
            impar->prox = l;
            impar = impar->prox;
            l=l->prox;
            impar->prox = NULL;
        }
    }
    
    LInt aux = parInicio;
    parInicio = parInicio->prox;
    free(aux);
    
    aux = imparInicio;
    imparInicio = imparInicio->prox;
    free(aux);
    
    return parInicio;
}
