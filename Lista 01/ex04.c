#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int ak = 2;
    int k = 2;
    int n = 5;
    int q = 3;
    int an;

    an = ak*pow(q,n-k);
    printf("%d ", an);

    return 0;
}