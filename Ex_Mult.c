#include <stdio.h>
/*Calcule o produto de 2 inteiros apenas usando a soma*/

/*
    2*5 = 2+2+2+2+2 = 10;
    5*2 = 5+5 = 10;
    33*10 = 33*33*33*33*33*33*33*33*33*33 = 330
*/


int main(){
    int n1,n2,menor,maior,mult=0;

    printf("Digite 2 inteiros: ");
    scanf("%d %d",&n1,&n2);

    if(n1<n2){
        menor = n1; /*defino o menor para somar menos vezes possiveis.*/
        maior = n2;   
    }
    else{
        menor = n2;
        maior = n1;
    }
    
    
    if(n1!=0 && n2!=0){
        for(int i=0;i<abs(menor);i++){
            mult += abs(maior);
        }
    }
    else{ /*caso algum dos numeros seja 0.*/
        mult = 0;
    }

    if(n1<0 && n2>0){
        printf("Resultado: %d",mult*-1);
    }
    else if(n1>0 && n2<0){
        printf("Resultado: %d",mult*-1);
    }
    else{
         printf("Resultado: %d",mult);
    }
    
    return 0;
}