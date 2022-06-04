#include <stdio.h>


/*
    Fazer um algoritmo que calcule e mostre o enésimo termo da série de Fibonacci.

    0+1=1
    1+1=2
    1+2=3
    2+3=5
    3+5=8

    primeiro_n+segundo_n
*/


int main(){
    long int i, primeiro_n = 0, segundo_n = 1;

    printf("Digite qual o tamanho da sequencia que deseja gerar: ");
    scanf("%d",&i);

    if(i <= 0){
        printf("Tamanho não permitido.");
    }
    else{
        printf("Serie: \n");
        while(i > 0){
            printf("%d\n",primeiro_n);
            segundo_n = segundo_n + primeiro_n;
            primeiro_n = segundo_n - primeiro_n;                 
            i--;
        }
    }
    return 0;
}