#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strrev (char s[])
{
    int j=0, i=strlen(s)-1;
    char v[i+1];
    
    for(i; i>=0; i--)
    {
        v[j]=s[i];
        j++;
    }
    v[j]='\0';
    
    i=0;
    
    for(i=0;v[i]!='\0';i++)
    {
        s[i]=v[i];
    }
    s[i]='\0';
}
