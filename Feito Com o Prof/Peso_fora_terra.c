#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int planeta;
	float peso;
	
	printf("Digite o c�digo do planeta e o seu peso: ");
	scanf("%d %f", &planeta, &peso);
	
	switch (planeta){
		case 1:
			printf("Peso em Merc�rio: %.2f",peso*0.37);
		break;
		case 2:
			printf("Peso em V�nus: %.2f",peso*0.88);
		break;
		case 3:
			printf("Peso em Marte: %.2f",peso*0.38);
		break;
		case 4:
			printf("Peso em J�piter: %.2f",peso*2.64);
		break;
		case 5:
			printf("Peso em Saturno: %.2f",peso*1.15);
		break;
		case 6:
			printf("Peso em Urano: %.2f",peso*1.17);
		break;
		default:
			printf("Apenas n�meros de 1 � 6!");
		break;
	}
	
	return 0;
}
