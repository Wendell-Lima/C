#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int planeta;
	float peso;
	
	printf("Digite o código do planeta e o seu peso: ");
	scanf("%d %f", &planeta, &peso);
	
	switch (planeta){
		case 1:
			printf("Peso em Mercúrio: %.2f",peso*0.37);
		break;
		case 2:
			printf("Peso em Vênus: %.2f",peso*0.88);
		break;
		case 3:
			printf("Peso em Marte: %.2f",peso*0.38);
		break;
		case 4:
			printf("Peso em Júpiter: %.2f",peso*2.64);
		break;
		case 5:
			printf("Peso em Saturno: %.2f",peso*1.15);
		break;
		case 6:
			printf("Peso em Urano: %.2f",peso*1.17);
		break;
		default:
			printf("Apenas números de 1 à 6!");
		break;
	}
	
	return 0;
}
