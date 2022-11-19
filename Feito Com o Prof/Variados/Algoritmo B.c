#include <stdio.h>
/*
	2 maiores valores entre uma lista
*/

int main(){
	int C,V,M1,M2;
	printf("Digite um valor para V: ");
	scanf("%d",&V);
	
	M1 = V;
	
	for(C=2;C<=10;C++){
		printf("Digite outro valor para V: ");
		scanf("%d",&V);
		if(V>M1){
			M2 = M1;
			M1 = V;
		}
		else if(V>M2 || C==2){
			M2 = V;
		}
	}
	
	printf("Valor de M1 = %d e M2 = %d",M1,M2);
	
	return 0;
}
