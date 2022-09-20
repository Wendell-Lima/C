#include <stdio.h>
#include <stdlib.h>
/*
    c) uma função que retorne o maior entre três valores informados.
    float maior(float A, float B, float C)
*/

float maior(float A, float B, float C);

float maior(float A, float B, float C){
    float maior;
    if(A>B && B>C){
        maior = A;
    }
    else if(A<B && B>C){
        maior = B;
    }
    else{
        maior = C;
    }
    return maior;
}

int main(){
    float A,B,C;

    printf("Digite tres valores: ");
    scanf("%f %f %f",&A,&B,&C);

    printf("\nMaior = %f",maior(A, B, C));

    return 0;
}