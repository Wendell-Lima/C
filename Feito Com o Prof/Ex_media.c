/*Calcula média aritmética simples*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	float n1,n2,n3,media;
	
	printf("Digite as tres notas = ");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	media = (n1+n2+n3)/3;
	
	if(media>=7.0){
		printf("Media = %.2f\n",media); 
		printf("Aprovado :)");
	}
	else{
		printf("Media = %.2f\n",media); 
		printf("Reprovado :(");
	}
	
	/* Usar "%.2f" para deixar apenas 2 casas após a virgula.
	system("pause");  --> Pressione qualquer tecla para continuar*/
	return 0;
}
