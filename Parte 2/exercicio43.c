#include <stdio.h>
#include <stdlib.h>

ABin cloneMirror (ABin a) 
{
    if (a == NULL) return NULL;
    
    ABin mirror = (ABin) malloc(sizeof(ABin));
    ABin newEsq = cloneMirror(a->dir);
    ABin newDir = cloneMirror(a->esq);
    
    mirror->valor = a->valor;
    mirror->esq = newEsq;
    mirror->dir = newDir;
    
    return mirror;
}
