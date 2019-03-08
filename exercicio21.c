#include <stdio.h>
#include <stdlib.h>

int contaVogais (char s[])
{
    int i, vog=0;
    
    for(i=0;s[i]!='\0';i++)
    {
        if (s[i]==65 || s[i]==69 || s[i]==73 || s[i]==79 || s[i]==85 || s[i]==97 || s[i]==101 || s[i]==105 || s[i]==111 || s[i]==117)
        {
            vog++;
        }
    }
    
    return vog;
}
