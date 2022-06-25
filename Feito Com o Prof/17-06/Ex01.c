#include <stdio.h>


int main(){
    float S=0,N;

    printf("Informe N: ");
    scanf("%f",&N);

    for(float i=1.0;i<=N;i++){
        S += 1/i;
    }

    printf("S = %.2f",S);

    return 0;
}