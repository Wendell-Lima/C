/*Verificar se o n�mero � par ou impar*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int n1;
	//setlocale(LC ALL, "Portuguese");
	
	printf("Digite um numero = ");
	scanf("%d",&n1);
	
	if(n1%2==0){
		printf("o numero � par.");
	}
	else{
		printf("o numero � impar.");
	}
	return 0;
}
