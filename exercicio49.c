#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct posicao {int x, y;} Posicao;

int distancia (Posicao n)
{
    int dis;
    
    dis = abs(n.x) + abs(n.y);
    
    return dis;
}

int maiscentral (Posicao pos[], int N)
{
    int i, j=0, min=distancia(pos[0]);
    
    for(i=0; i<N; i++)
    {
        if (distancia(pos[i]) < min)
        {
            min = distancia(pos[i]);
            j=i;
        }
    }
    return j;
}
