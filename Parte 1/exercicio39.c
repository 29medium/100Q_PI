#include <stdio.h>
#include <stdlib.h>

int triSup (int N, int m [N][N])
{
    int i, j;
    
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if (j<i) {if (m[i][j]!=0) return 0;}
        }
    }
    return 1;
}
