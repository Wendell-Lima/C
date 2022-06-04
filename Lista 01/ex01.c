/*1- Uma P.A. (progressão aritmética) fica determinada pela sua razão (r) e pelo primeiro
termo(a1). Escreva um Algoritmo que seja capaz de determinar qualquer termo de uma
P.A., dado a razão e o primeiro termo.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a1 = 5;
    int n = 2;
    int r = 4;
    int an;

    an = a1 + (n-1) * r;

    printf("%d " ,an);

    return(0);
}