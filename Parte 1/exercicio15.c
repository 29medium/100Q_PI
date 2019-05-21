#include <stdio.h>
#include <stdlib.h>

int iguaisConsecutivos (char s[])
{
    int i, max=0, n=1;
    
    for(i=0; s[i]!='\0'; i++)
    {
        if (s[i+1]==s[i])
        {
            n++;
        }
        
        else
        {
            if (n>max) max=n;
            n=1;
        }
    }
    return max;
}
