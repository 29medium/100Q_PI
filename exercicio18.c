#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maiorSufixo (char s1 [], char s2 [])
{
    int i, j, suf=0;
    
    for(i=strlen(s1)-1, j=strlen(s2)-1; s1[i]==s2[j] && i>=0 ;i--, j--) suf++;
    
    return suf;
}
