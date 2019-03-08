#include <stdio.h>
#include <stdlib.h>

int maiorPrefixo (char s1 [], char s2 [])
{
    int i, pref=0;
    
    for (i=0; s1[i]==s2[i]; i++)
    {
        pref++;
    }
    
    return pref;
}
