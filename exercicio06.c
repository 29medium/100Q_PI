#include <stdio.h>
#include <stdlib.h>

int qDig (int n)
{
    int r = 0;
    if (n==0)
    {
        return 1;
    }
    while (n!=0)
    {
        n/=10;
        r++;
    }
    return r;
}
