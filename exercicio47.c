#include <stdio.h>
#include <stdlib.h>

typedef enum movimento {Norte, Oeste, Sul, Este} Movimento;
typedef struct posicao {int x, y;} Posicao;

Posicao posFinal (Posicao inicial, Movimento mov[], int N)
{
    int i;
    
    for(i=0; i<N; i++)
    {
        if (mov[i]==Norte) inicial.y++;
        else if (mov[i]==Sul) inicial.y--;
        else if (mov[i]==Este) inicial.x++;
        else if (mov[i]==Oeste) inicial.x--;
    }
    
    return inicial;
}
