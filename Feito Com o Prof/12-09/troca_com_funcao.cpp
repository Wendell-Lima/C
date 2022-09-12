#include <stdio.h>
#include <stdlib.h>
	
void troca(int *X, int *Y){
	int aux;
	
	aux = *X;
	*X = *Y;
	*Y = aux;
}

int main(){
	int A, B;
	printf("Informe os valores para A e B = ");
	scanf("%d %d", &A, &B);
	
	troca(&A,&B);
	printf("A:%d B:%d\n", A, B);
	
	return 0;
}
