#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char planeta; 
	float peso;
	printf("\nCódigo do planeta --> Letra em maiúsculo: \n\n");
	printf("Mercúrio\n");
	printf("Vênus\n");
	printf("mArte\n");
	printf("Júpiter\n");
	printf("Saturno\n");
	printf("Urano\n\n");
	
	printf("Digite o código do planeta e o seu peso: ");
	scanf("%c %f", &planeta, &peso);
	
	switch (planeta){
		case 'm': /* Nesse caso como o case está sem default, ele pulará para o próximo case que possua break;*/
		case 'M':
			printf("Peso em Mercúrio: %.2f",peso*0.37);
		break;
		
		case 'v':
		case 'V':
			printf("Peso em Vênus: %.2f",peso*0.88);
		break;
		
		case 'a':
		case 'A':
			printf("Peso em Marte: %.2f",peso*0.38);
		break;
		
		case 'j':
		case 'J':
			printf("Peso em Júpiter: %.2f",peso*2.64);
		break;
		
		case 's':
		case 'S':
			printf("Peso em Saturno: %.2f",peso*1.15);
		break;
		
		case 'u':
		case 'U':
			printf("Peso em Urano: %.2f",peso*1.17);
		break;
		
		default:
			printf("Apenas números de 1 à 6!");
		break;
	}
	
	return 0;
}
