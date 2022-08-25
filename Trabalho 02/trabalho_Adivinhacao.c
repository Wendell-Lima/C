#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 8
#define M 4

int main()
{
    char cartas[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    char tab[M][M],aux[M][M],letra;
    int i,j,igual = 0;

    srand(time(NULL));

    for(i=0;i<4;i++)
        for(j=0;j<4;j++){
            aux[i][j] = '*';
            tab[i][j] = 'x';
        }

    for(i=0;i<N;i++)
    {
        letra = cartas[rand() %8];  
        for(j=0;j<2;j++){
            
            if(letra!='x'){
                tab[][]
            }
        }
    }
        
    
    printf("letra = %c",letra);
    /*for(i=0;i<4;i++){
        printf("\n");
        for(j=0;j<4;j++){
            printf("  ");
            printf("%c",aux[i][j]);
        }
    }

    for(i=0;i<N;i++)
    printf("%c ",cartas[i]);
    */   

    for(i=0;i<4;i++){
        printf("\n");
        for(j=0;j<4;j++){
            printf("  ");
            printf("%c",tab[i][j]);
        }
    }   
    return 0;
}