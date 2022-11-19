/*Verificar se o número é par ou impar*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int n1;
	//setlocale(LC ALL, "Portuguese");
	
	printf("Digite um numero = ");
	scanf("%d",&n1);
	
	if(n1%2==0){
		printf("o numero é par.");
	}
	else{
		printf("o numero é impar.");
	}
	return 0;
}
