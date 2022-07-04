/*
    1) Algoritmo da tabuada de um número informado pelo usuário;
*/

#include <stdio.h>

int main(){
    int numero,resultado,cont=0;

        printf("Digite um número para ser mostrado a tabuada: ");
        scanf("%d",&numero);

    do{
        resultado = numero * cont;
        printf("\n%d x %d = %d",numero,cont,resultado);
        cont++;
    }
    while(cont<11);




    return 0;
}