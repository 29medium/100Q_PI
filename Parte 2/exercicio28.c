#include <stdio.h>
#include <stdlib.h>

int altura (ABin a)
{
    if (a==NULL) return 0;
    
    int esquerda = altura(a->esq);
    int direita = altura(a->dir);
    
    if (esquerda>direita) return (esquerda + 1);
    
    else return (direita + 1);
}
