#include <stdio.h>
#include <stdlib.h>

int charcontido (char a, char b[])
{
    int i;
    
    for(i=0; b[i]!=0; i++)
    {
        if (b[i]==a) return 1;
    }
    
    return 0;
}

int contida (char a[], char b[])
{
    int i;
    
    for(i=0; a[i]!='\0'; i++)
    {
        if (charcontido(a[i],b) == 0) return 0;
    }
    
    return 1;
}
