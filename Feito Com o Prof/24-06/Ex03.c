#include <stdio.h>
#include <math.h>
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
    int n,p,aux,aux2,negativo=0;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);
    printf("Digite a qual potencia deseja elevar (apenas numeros positivos!): ");
    scanf("%d",&p);

    if(n < 0){ /*caso a base seja negativa e o expoente seja impar, o numero será multiplicado por 1 no final*/  
        if(p % 2 == 0){
            negativo = 0;
            printf("\nNegativo = %d",negativo);
        }    
        else{
            negativo = 1;
        }
    }

    if(p<0){
        n = (float)1/n; 
        printf("Entrei aqui, N = %f\n",n);
    }

    n = abs(n); /*Tornando o numero positivo.*/
    aux = n;
    aux2 = n;

    if(n >=0 && p > 0){
        for(int cont=1;cont<p;cont++){
            for(int i=1;i<aux;i++){
                n+=aux2;
            }
            aux2 = n;
        }
    }
    else if(n > 0 && p == 0){
        n = 1;
    }
    else if(n == 0 && p == 0){
        printf("ERRO!");
        return 0;
    }

  
    if(negativo == 0){
        printf("Resultado da potencia de %d ^ %d = %d",aux,p,n);
    }
    else{ /*Else = caso a for impar*/
        printf("Resultado da potencia de %d ^ %d = %d",aux*-1,p,n*-1);
    }

    return 0;
}