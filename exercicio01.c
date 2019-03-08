#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max, i;
    scanf("%d", &i);
    max = i;
    while (i!=0)
    {
        if (i>max) max=i;
        scanf("%d", &i);
    }
    printf("O maximo é: %d", max);
    return 0;
}
