#include <stdio.h>
#include <stdlib.h>

ABin somasAcA (ABin a) 
{
    if (a==NULL) return NULL;
    
    ABin newEsq = somasAcA(a->esq);
    ABin newDir = somasAcA(a->dir);
    int resEsq, resDir;
    
    ABin b = (ABin) malloc(sizeof(ABin));
    b->esq = newEsq;
    b->dir = newDir;
    
    if (newEsq == NULL) resEsq = 0;
    else resEsq = newEsq -> valor;
    
    if (newDir == NULL) resDir = 0;
    else resDir = newDir -> valor;
    
    b->valor = a->valor + resEsq + resDir;
    
    return b;
}
