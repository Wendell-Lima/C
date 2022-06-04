#include <stdio.h>
#include <stdlib.h>


int main(){
    int n,cont=2,cont_div=0;
    
    printf("Digite um numero natural: ");
    scanf("%d",&n);

    if(n>0){
        while(cont<=n){
            if(n % cont == 0){
                cont_div++;
            }
            cont++;
        }
        if(cont_div == 1)
            printf("SIM, primo.");        
        else
            printf("NAO, primo.");
    }
    else
        printf("Apenas números naturais!");
        
    return 0;
}