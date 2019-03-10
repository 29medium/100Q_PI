#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindroma (char s[])
{
    int i, j, n=strlen(s)-1;
    
    for (i=0, j=n; s[i]!='\0'; i++, j--)
    {
        if (s[i]!=s[j]) return 0;
    }
    
    return 1;
}
