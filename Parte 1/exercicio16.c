#include <stdio.h>
#include <stdlib.h>

int diferente (int i, int j, char s[])
{
    while (i<j)
    {
        if (s[i]==s[j]) return 0;
        i++;
    }
    return 1;
}

int difConsecutivos (char s[]) 
{
	int i, j, dif=0, res=0;
	
	for(i=0; s[i]!=0; i++)
	{
	    dif=0;
	    
	    for(j=i; s[j]!='\0' && diferente(i, j, s) ; j++)
	    {
	        dif++;
	    }
	    
	    if (dif>res) res=dif;
	}
	
	return res;
}
