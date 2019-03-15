#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max, smax, i;
    scanf("%d", &i);
    max = i;
    smax = i;
    while (i!=0)
    {
        if (i>max) 
        {
            smax=max;
            max=i;
        }
        
        else if (i>smax) smax=i; 
        
        scanf("%d", &i);
    }
    printf("O segundo maximo é: %d", smax);
    return 0;
}
