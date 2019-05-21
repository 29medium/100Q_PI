#include <stdio.h>
#include <stdlib.h>

int trailingZ (unsigned int n)
{
    int r=0;
    while (n%2==0)
    {
        n/=2;
        r++;
    }
    return r;
}
