int depth (ABin a, int x) 
{
    if (a==NULL) return -1;
    
    if (a->valor == x) return 1;
    
    if (depth(a->esq, x)<0 && depth(a->dir, x)<0) return -1;
    
    else if (depth(a->esq, x)<0) return depth(a->dir, x) + 1;
    
    else if (depth(a->dir, x)<0) return depth(a->esq, x) + 1;
    
    else
    {
        if (depth(a->esq, x) < depth(a->dir, x)) return depth(a->esq, x)+1;
        
        else return depth(a->dir, x)+1;
    }
}
