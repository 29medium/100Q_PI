#include <stdio.h>
#include <stdlib.h>

int removeAll (LInt *l, int x)
{
    int res=0, flag = 0;
    LInt aux, prev;
    
    while (*l!=NULL && flag==0)
    {
        if((*l)->valor == x) 
        {
            *l=(*l)->prox;
            res++;
        }
        
        else flag=1;
    }
    
    if (*l == NULL) return res;
    
    aux=*l;
    
    while(aux != NULL)
    {
        if(aux->valor == x)
        {
            aux=aux->prox;
            prev->prox=aux;
            res++;
        }
        else
        {
            prev=aux;
            aux=aux->prox;
        }
    }
    
    return res;
}
