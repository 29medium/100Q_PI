#include <stdio.h>
#include <stdlib.h>

int minInd (int v[], int n)
{
   int i, min=v[0], k=0;
   
   for(i=0; i<n; i++)
   {
       if (v[i]<min)
       {
           min=v[i];
           k=i;
       }
   }
   return k;
}
