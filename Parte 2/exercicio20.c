//Inacabado

#include <stdio.h>
#include <stdlib.h>

int length (LInt l)
{
    int i;
    
    for(i=0; l!=NULL; i++) l=l->prox;
    
    return i;
}

void freeL (LInt head)
{
	LInt tmp;
    
	while (head != NULL)
    {
		tmp = head;
		head = head->prox;
		free(tmp);
	} 
}

int drop (int n, LInt *l)
{
    int i;
    LInt aux=*l;
    
    int len = length(*l);
    
    if(len<=n) 
    {
        freeL(aux);
        *l=NULL;
        return len;
    }
    
    for(i=0; i<n ; i++)
    {
        aux=*l;
        *l=(*l)->prox;
        free(aux);
    }
    
    return n;
}
