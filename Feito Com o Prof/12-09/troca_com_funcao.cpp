#include <stdio.h>
#include <stdlib.h>
	
// Procedimento void!!! sem return

void troca(int *X, int *Y){
	int aux;
	
	aux = *X;
	*X = *Y;
	*Y = aux;
}

// Função para cálculo do fatorial

int Fat(int N){
	int R, i;
	
	if (N<0) return -1; //situação de erro, o cara passou valor negativo
	
	R=1;
	i=2;
	while(i<=N){
		R=R*i;
		i++;
	}
		
	return R;
}

int main(){
	int A, B;
	printf("Informe os valores para A e B = ");
	scanf("%d %d", &A, &B);
	
	troca(&A,&B); /*X aponta para o A, Y aponta para o B*/
	printf("A:%d B:%d\n", A, B);
	
	
	printf("Fatorial de %d = %d\n", A, Fat(A));
	return 0;
}
