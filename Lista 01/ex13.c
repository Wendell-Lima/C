// 13- Escreva um Algoritmo que leia um número real e imprima a terça parte deste número.

#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1,terca;

    printf("Digite um numero real: ");
    scanf("%f",&n1);

    terca = n1/3;

    printf("Terca parte = %f",terca);

    return 0;
}