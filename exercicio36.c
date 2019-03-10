#include <stdio.h>
#include <stdlib.h>

int comuns (int a[],int na,int b[],int nb)
{
	int i,j,com = 0;
	
	for (i = 0; i<na;i++)
	{
	    for (j = 0;j<nb;j++)
	    {
	        if (a[i] == b[j])
			{
				com++;
				break;
			}
	    }
			
	}
		
	return com;
}
