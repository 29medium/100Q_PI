#include <stdio.h>
#include <stdlib.h>

int crescente (int a[], int i, int j)
{
    int n, r=0;
    
    for(n=i; n<j; n++)
    {
        if (a[n]>a[n+1]) return 0; 
    }
    
    return 1;
}
