#include <stdio.h>
#include <stdlib.h>
#define t 2



int main(){
	int A[t][t],B[t][t],Mult[t][t];
	
	/* Lendo matriz A */
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			printf("A(%d,%d): ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	
	/* Lendo matriz B */
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			printf("B(%d,%d): ",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	
	/* Realizando o produto */
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			Mult[i][j] = 0;
			for(int k=0;k<t;k++){
				Mult[i][j] = Mult[i][j]+ A[i][k]*B[k][j];
			}
		}
	}
	
	/* Mostrando as matrizes */
	printf("A=");
	for(int i=0;i<t;i++){
		printf("\n");
		for(int j=0;j<t;j++){
			printf("%d ",A[i][j]);
		}
	}
	
	printf("\nB=");
	for(int i=0;i<t;i++){
		printf("\n");
		for(int j=0;j<t;j++){
			printf("%d ",B[i][j]);
		}
	}
	
	printf("\nMult=");
	for(int i=0;i<t;i++){
		printf("\n");
		for(int j=0;j<t;j++){
			printf("%d  ",Mult[i][j]);
		}
	}
	
	
	return 0;
}
