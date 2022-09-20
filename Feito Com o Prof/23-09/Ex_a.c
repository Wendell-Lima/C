#include <stdio.h>
#include <stdlib.h>

/*
    a) uma função que verifique se um dado número inteiro é perfeito, retornando 1 se perfeito e 0 caso contrário.
    int perfeito (int Num)
*/
int perfeito(int num); /*PROTÓTIPO DE UMA FUNÇÃO*/

int perfeito(int num){
    int i,aux=0;
    for(i=num-1;i>0;i--){
        if(num%i==0){
            aux += i;
        }
    }
    if(aux == num){
        printf("e perfeito!");
        return 1;
    }
    else{
        printf("nao e perfeito!");
        return 0;
    }
}


int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);

    perfeito(n);

    return 0;
}

