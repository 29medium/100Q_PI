#include <stdio.h>
#include <stdlib.h>

int contaFolhas (ABin a) 
{
    if(a==NULL) return 0;
    
    else 
    {
        if (a->esq == NULL && a->dir == NULL) return 1;
        
        else return contaFolhas(a->esq) + contaFolhas(a->dir);
    }
}
