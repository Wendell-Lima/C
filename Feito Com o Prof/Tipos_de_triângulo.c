#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float A,B,C;
	
	printf("Digite as tr�s medidas: ");
	scanf("%f %f %f", &A,&B,&C);
	3
	
	if(A+B>C && B+C>A && C+A>B){ /*Ent�o � um tri�ngulo.*/
	
		if(A==B && B==C){ /*Ent�o � equil�tero*/
			printf("Tri�ngulo equil�tero.");
		}
		else if(A==B || B==C || C==A){ /*Ent�o � is�sceles*/
			printf("Tri�ngulo is�sceles.");
		}
		else{ /*Se n�o for nenhum outro, � escaleno*/
			printf("Tri�ngulo escaleno (Qualquer)");
		}
	}
	else{
		printf("As medidas n�o formam um tri�ngulo.");
	}
	
	return 0;
}
