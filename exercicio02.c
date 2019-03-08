#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma=0, i, div=0;
    float media;
    scanf ("%d", &i);
    while (i!=0)
    {
        soma += i;
        div++;
        scanf ("%d", &i);
    }
    media = soma/div;
    printf("A media e: %f", media);
    return 0;
}
