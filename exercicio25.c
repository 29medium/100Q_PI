#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int limpaEspacos (char texto[])
{
    int i, j;
    
    for(i=0; texto[i]!='\0'; i++)
    {
        if ((isspace(texto[i])) && (texto[i+1]==texto[i]))
        {
            for(j=i; texto[j]!='\0'; j++)
            {
                texto[j]=texto[j+1];
            }
            texto[j]='\0';
            i--;
        }
    }
    
    return strlen(texto);
}
