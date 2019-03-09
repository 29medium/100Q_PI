#include <stdio.h>
#include <stdlib.h>

void transposta (int N, float m [N][N])
{
    int i, j;
    float p[N][N];
    
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++) p[i][j]=m[i][j];
    }
    
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++) m[i][j]=p[j][i];
    }
}
