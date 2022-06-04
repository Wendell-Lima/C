#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a1 = 7;
    int n = 2;
    int q = 3;
    int an;

    an = a1 * pow(q, n-1);
    printf("%d ", an);
    
    return 0;
}