#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 8
#define M 4

int main()
{
    char cartas[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    char tab[M][M],aux[M][M],letra[N];
    int i,j,l,c,igual = 0;

    srand(time(NULL));

    for(i=0;i<M;i++)
        for(j=0;j<M;j++){
            aux[i][j] = '*';
            tab[i][j] = 'x';
        }

    for(i=0;i<N;i++){   
        for(j=0;j<2;j++){
            l = rand() % 4;
            c = rand() % 4;
            if(tab[l][c]=='x'){
                tab[l][c] = cartas[i];
            }
            else{
                j--;
            }
        }

    }

    
    for(i=0;i<4;i++){
        printf("\n");
        for(j=0;j<4;j++){
            printf("  ");
            printf("%c",tab[i][j]);
        }
    }   
    return 0;
}