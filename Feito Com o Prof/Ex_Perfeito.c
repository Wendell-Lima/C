#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n, cont=1, divisor=0;

    printf("Digite um numero natural: ");
    scanf("%i",&n);

    if(n <= 0){
        printf("Apenas numeros maiores que 0!");
    }
    else{
        while(cont < n){
            if(n % cont == 0){
                divisor += cont; //divisor = divisor + cont
            }
            cont++;
        }
    }

    if(divisor == n){
        printf("O seu numero e perfeito!\n");
        printf("A soma de seus divisores e: %d",divisor);
    }
    else{
        printf("O numero informado nao e perfeito.\n");
        printf("A soma de seus divisores e: %d",divisor);
    }

    return 0;
}