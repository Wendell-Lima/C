#include <stdio.h>

/*
    N = 4
    S = 1/4 + 2/3 + 3/2 + 4/1 = 6,416666...
*/

int main(){
    float S=0,N;

    printf("Digite um valor para N: ");
    scanf("%f", &N);

    for(int C = 1; N>0; C++){
        S += C/N;
        printf("%d/%.0f = %.1f\n",C,N,S);
        N--;
    }
    printf("%.2f", S);
    
    return 0;
}