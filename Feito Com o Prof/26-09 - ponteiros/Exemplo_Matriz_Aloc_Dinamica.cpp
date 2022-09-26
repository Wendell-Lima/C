#include <stdio.h>
#include <stdlib.h>

// cria matriz de float

float **criaMat(int L, int C){
	float **p;
	int i;
	
	// alocando as LINHAS da matriz
	p = (float **) malloc(L*sizeof(float *));
	
	if(p == NULL) return NULL;
	
	// alocando as COLUNAS da matriz
	for(i=0;i<L;i++){
		p[i] = (float *) malloc(C *sizeof(float));
		if(p[i] == NULL) return NULL;
	}
	
	return p;
}

void inicializaMat(float **x, int L, int C){
	int i, j;
	for (i=0; i<L;i++){
		for(j=0;j<C;j++){
			x[i][j] = 1;
		}
	}
}

void mostraMat(float **x, int L, int C){
	int i, j;
	for (i=0; i<L;i++){
        printf("\n ");
		for(j=0;j<C;j++){
			printf("%.1f ",x[i][j]);
		}
	}
}

void deletaMat(float **x, int L){
	if(x!=NULL){
		// deleta linhas
		for(i=0; i<L;i++){
			if(x[i]!=NULL) free(x[i]);
		}
		
		// deleta o vetor de ponteiros
		free(x);
	}
}

int main(){
	float **Mat;
	Mat = criaMat(5,6);
	inicializaMat (Mat, 5,6);
 	mostraMat(Mat,5,6);
 	
}
