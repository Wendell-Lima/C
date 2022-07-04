/*
    3)Resolva o exercicio abaixo usando enquanto e repita:

	- Chico tem 1,50m e cresce 2cm por ano, enquanto Juca tem 1,10m e cresce 3cm por ano.
	- Construa um algoritmo que calcule e imprima quantos anos seráo necessários para que Juca seja maior que Chico.

*/
#include <stdio.h>

int main(){
    int anos=0;
    float altura_c = 1.5,altura_j = 1.1;

    printf("\naltura chico = %d",altura_c)
    printf("\naltura juca = %d",altura_j)
    
    do{
        altura_c += 0.2; printf("\naltura chico = %d",altura_c);
        altura_j += 0.3; printf("\naltura juca = %d",altura_j);
        anos++; 
    }while(altura_j < altura_c);

    printf("Juca levará %d anos para ultrapassar Chico.",anos);


    return 0;   
}