#include <stdio.h>
#include <stdlib.h>
#define N 10
#define M 5

// Protótipo de função
float MaiorVet(float [], int);
float MaiorMat(float [][M], int, int);
void inicializaVet(float [], int);
void inicializaMat(float [][M], int, int);

int main(){
	int i;
	float x[N], m[N][M];
	
	inicializaVet(x,N);
	printf("Maior = %.2f\n",MaiorVet(x,N));
	
	inicializaMat(m,N,M);
	printf("Maior = %.2f\n",MaiorMat(m,N,M));
	
	return 0;
}

// procedimento que inicializa o vetor com valor randomicos
void inicializaVet(float v[], int tam){
	int i;
	srand(200);
	for(i=0;i<tam;i++)
        v[i]=rand() % 100; // 0 a 99
}

// procedimento que inicializa a matriz com valor randomicos
void inicializaMat(float v[][M], int L, int C){
	int i, j;
	srand(200);
	for(i=0;i<L;i++)
	    for(j=0;j<C;j++)
        v[i][j]=rand() % 100; // 0 a 99
}

// função que retorna maior valor do Vetor
float MaiorVet(float v[], int tam){
	int i;
	float ma = v[0];
	for (i=0;i<tam;i++)
		if(v[i]>ma) ma = v[i];
	return ma;
}

// função que retorna maior valor da Matriz
float MaiorMat(float v[][M], int L, int C){
	int i;
	float ma = v[0][0];
	for (i=0;i<L;i++)
		for(int j=0;j<C;j++)
		    if(v[L][C]>ma) ma = v[L][C];
	return ma;
}


