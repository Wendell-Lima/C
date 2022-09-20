#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 8
#define M 4

/*
    Nome: Wendell Maciel de Lima R.A. = 22021423
*/


int main()
{
    char cartas[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    char tab[M][M],aux[M][M];
    int i,j,l,c;
    int linha,coluna,antiga_l=0,antiga_c=0,cont=0,jogadas=1,continua = 0;

    srand(time(NULL));

    /* PREENCHENDO OS DOIS VETORES */
    for(i=0;i<M;i++)
        for(j=0;j<M;j++){
            aux[i][j] = '*';
            tab[i][j] = 'x';
        }


    /* EMBARALHANDO CARTAS */
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

    /*Mensagem de boas vindas e instruções*/

    printf("-----  Bem vindo ao jogo da memoria!  ----\n");
    printf("\nPara jogar digite apenas numeros entre 1 e 4, tanto para linha como coluna.");
    printf("\nDigite 1 para iniciar: ");
    scanf("%d",&continua);
    /*Colocarei depois um sistema que inicia ou finaliza o jogo conforme a intrução do usuário.*/

    printf("Matriz:");
    if(continua==1){
        for(i=0;i<M;i++){
            printf("\n");
            for(j=0;j<M;j++){
                printf("%c  ",aux[i][j]);
                /*
                    Caso queira ver a matriz antes para testar, troque o aux[i][j] por tab[i][j].
                */
            }
        }
    }
    

    while(continua == 1){
        
        printf("\nInforme a linha e a coluna: ");
        scanf("%d %d",&linha,&coluna);

        linha--;
        coluna--;

        aux[linha][coluna] = tab[linha][coluna];

        printf("Matriz:");
        for(i=0;i<M;i++){
            printf("\n");
            for(j=0;j<M;j++){
                printf("%c  ",aux[i][j]);
            }
        }
        
        if(jogadas%2==0){
            if(aux[linha][coluna]!=aux[antiga_l][antiga_c]){
                aux[linha][coluna] = '*';
                aux[antiga_l][antiga_c] = '*';
                printf("\n---- Errooou! ----");
            }
            else{
                printf("\n---- Acertou! ----");
                cont++;
            }
        }
        
        if(cont==8){
            printf("\n\nParabens!!! \nVoce venceu :D");
            continua = 0;
        }
        antiga_l = linha;
        antiga_c = coluna;
        jogadas++;
    }

    return 0;
}