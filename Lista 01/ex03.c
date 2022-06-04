/*3- Dada a razão de uma P.A. (progressão aritmética) e um termo qualquer, k(a k ). Escreva
um Algoritmo para calcular qualquer outro termo, n, (a n ).*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int ak = 231;
    int k = 7;
    int n = 5;
    int r = 13;
    int an;

    an = ak+(n-k)*r;
    printf("%d ", an);

    return (0);
}