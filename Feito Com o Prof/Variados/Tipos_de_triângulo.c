#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float A,B,C;
	
	printf("Digite as três medidas: ");
	scanf("%f %f %f", &A,&B,&C);
	3
	
	if(A+B>C && B+C>A && C+A>B){ /*Então é um triângulo.*/
	
		if(A==B && B==C){ /*Então é equilátero*/
			printf("Triângulo equilátero.");
		}
		else if(A==B || B==C || C==A){ /*Então é isósceles*/
			printf("Triângulo isósceles.");
		}
		else{ /*Se não for nenhum outro, é escaleno*/
			printf("Triângulo escaleno (Qualquer)");
		}
	}
	else{
		printf("As medidas não formam um triângulo.");
	}
	
	return 0;
}
