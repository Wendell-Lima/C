#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char planeta; 
	float peso;
	printf("\nC�digo do planeta --> Letra em mai�sculo: \n\n");
	printf("Merc�rio\n");
	printf("V�nus\n");
	printf("mArte\n");
	printf("J�piter\n");
	printf("Saturno\n");
	printf("Urano\n\n");
	
	printf("Digite o c�digo do planeta e o seu peso: ");
	scanf("%c %f", &planeta, &peso);
	
	switch (planeta){
		case 'm': /* Nesse caso como o case est� sem default, ele pular� para o pr�ximo case que possua break;*/
		case 'M':
			printf("Peso em Merc�rio: %.2f",peso*0.37);
		break;
		
		case 'v':
		case 'V':
			printf("Peso em V�nus: %.2f",peso*0.88);
		break;
		
		case 'a':
		case 'A':
			printf("Peso em Marte: %.2f",peso*0.38);
		break;
		
		case 'j':
		case 'J':
			printf("Peso em J�piter: %.2f",peso*2.64);
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
			printf("Apenas n�meros de 1 � 6!");
		break;
	}
	
	return 0;
}
