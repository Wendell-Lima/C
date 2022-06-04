/*15- Escreva um Algoritmo que leia dois números reais e imprima a média aritmética
entre esses dois valores com a seguinte mensagem “MEDIA” antes do resultado.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1,n2,media;

    printf("Digite os dois numeros: ");
    scanf("%f %f", &n1,&n2);

    media = (n1+n2)/2;

    printf("A media e: %f",media);

    return 0; 
}