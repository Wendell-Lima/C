/*
	Encontrar primos dentro de uma faixa
	10 - 100
	80 - 200
	A - B
*/
#include <stdio.h>

int main(){
	int A,B,cont=0;
	
	printf("Digite dois números para gerar uma faixa: ");
	scanf("%d %d",&A,&B);
	
	printf("\nA = %d",A);
	printf("\nB = %d\n",B);
	
	for(A;A<=B;A++){
		for(int i=2;i<=A;i++){
			if(A % i == 0){
				cont++;
			}
		}
		if(cont == 1){
			printf("\nPrimo: %d",A);
			cont = 0;
		}
		else{
			cont = 0;
		}
	}
	
		
	return 0;
}
