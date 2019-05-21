#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char charMaisfreq (char s[]) 
{
    int i, j, cont[127]={0}, max;
    
    if (s[0]=='\0') return 0;
    
    for (i=0; s[i]!='\0' ;i++) {cont[s[i]]++;}
    
    for (i=0, j=0, max=cont[0] ; cont[i]<127; i++)
    {
        if (cont[i] > max) 
        {
            max=cont[i];
            j=i;
        }
    }
    return j;
}
