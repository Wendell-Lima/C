#include <stdio.h>

/*
    3) DESAFIO: Dado um número inteiro, eleve a uma potência
    usando apenas soma.

    2*5 = 2+2+2+2+2 = 10;
    5*2 = 5+5 = 10;
    12^3= 1728 = 12*12*12
    12*12= 12+12+12+12+12+12+12+12+12+12+12+12 = 144
    12*144 = 144+144+144+144+144+144+144+144+144+144+144+144 = 1728

*/

int main(){
    int n,p,aux,aux2;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);
    printf("Digite a qual potencia deseja elevar: ");
    scanf("%d",&p);

    aux = n;
    aux2 = n;

    for(int cont=1;cont<p;cont++){
        for(int i=1;i<aux;i++){
            n+=aux2;
        }
        aux2 = n;
    }
 
    printf("Resultado da potencia de %d ^ %d = %d",aux,p,n);

    return 0;
}