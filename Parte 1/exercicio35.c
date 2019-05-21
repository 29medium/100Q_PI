#include <stdio.h>
#include <stdlib.h>

int comunsOrd (int a[], int na, int b[], int nb)
{
    int i=0, j=0, com=0;
    
    while(i<na && j<nb)
    {
        if (a[i]<b[j]) i++;
        if (b[j]<a[i]) j++;
        if (a[i]==b[j])
        {
            com++;
            i++;
            j++;
        }
    }
    
    return com;
}
