/*12- Escreva um Algoritmo que leia dois números inteiros e imprima o resultado da soma
destes dois valores. Antes do resultado, deve ser impressa a seguinte mensagem
“SOMA”.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1,n2,soma;

    printf("Digite os dois numeros: ");
    scanf("%d %d", &n1, &n2);

    soma = n1+n2;

    printf("Soma: %d",soma);

    return 0;
}

