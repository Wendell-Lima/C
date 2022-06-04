/*2- Uma P.G. (progressão geométrica) fica determinada pela sua razão (q) e pelo primeiro
termo (a1). Escreva um Algoritmo que seja capaz de determinar qualquer termo de uma
P.G., dado a razão e o primeiro termo.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a1,razao,resultado;
    printf("Primeiro termo: ");
    scanf("%d", &a1);
    printf("Razao: ");
    scanf("%d", &razao);

    resultado = a1;

    for(int i=2;i<=11;i++){
        printf("%d ", resultado);
        resultado = a1*pow(razao,i-1); 
    }


    return (0);
}