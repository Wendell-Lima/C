/*11- Escreva um Algoritmo que leia um número inteiro e imprima o seu sucessor e seu
antecessor.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero,n_antecessor,n_sucessor;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    n_antecessor = numero - 1;
    n_sucessor = numero + 1;


    printf("Antecessor: %d\n",n_antecessor);
    printf("Sucessor: %d",n_sucessor);
    
    return 0;
}