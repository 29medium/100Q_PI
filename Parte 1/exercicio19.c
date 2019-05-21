#include <stdio.h>
#include <stdlib.h>

int sufPref (char s1[], char s2[]) 
{
    int i, j;
    
    for(i=0, j=0; s1[i]!='\0'; i++)
    {
        if (s1[i]==s2[j]) j++;
        
        else j=0;
    }
    return j;
}
