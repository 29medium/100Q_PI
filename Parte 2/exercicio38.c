#include "abin.h"

/* Defina uma função "LInt nivelL (ABin a, int n)" que, dada uma árvore
 binária, constrói uma lista com os valores dos elementos que estão armazenados
 na árvore ao nível "n" (assuma que a raiz da árvore está ao nível "1").  */


void niv (LInt *b, ABin a, int n)
{
    if (a==NULL) return;
    
    if (n==1)
    {
        LInt new = (LInt) malloc(sizeof(struct lligada));
	    new->valor = a->valor;
	    new->prox = *b;
	    (*b) = new;
    }
    
    else
    {
        n--;
        niv (b, a->esq, n);
        niv (b, a->dir, n);
    }
}
