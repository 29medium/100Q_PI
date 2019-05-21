#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef enum movimento {Norte, Oeste, Sul, Este} Movimento;
typedef struct posicao {int x, y;} Posicao;

int caminho (Posicao inicial, Posicao final, Movimento mov[], int N)
{
    int i, n=0;
    
    for(i=0 ; (inicial.x!=final.x)||(inicial.y!=final.y) ; i++)
    {
        if (inicial.x>final.x) {mov[i]=Oeste; inicial.x--;}
        
        else if (inicial.x<final.x) {mov[i]=Este; inicial.x++;}
        
        else if (inicial.y>final.y) {mov[i]=Sul; inicial.y--;}
        
        else if (inicial.y<final.y) {mov[i]=Norte; inicial.y++;}
        
        n++;
    }
    
    if (n>N) return -1;
    
    return n;
}
