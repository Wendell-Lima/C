/*16- Certo dia o professor de Johann Friederich Carl Gauss (aos 10 anos de idade) mandou
que os alunos somassem os números de 1 a 100. Imediatamente Gauss achou a resposta –
5050 – aparentemente sem cálculos. Supõe-se que já aí, Gauss, houvesse descoberto a
fórmula de uma soma de uma progressão aritmética.

Construa uma Algoritmo para realizar a soma de uma P.A. de N termos, com o primeiro
a1 e o último an.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a1, an, n, sn;

    printf("Digite o primeiro valor da P.A. = ");
    scanf("%d",&a1);

    printf("Digite o enesimo valor da P.A. = ");
    scanf("%d",&an);

    printf("Digite quantos elementos existem na P.A. = ");
    scanf("%d",&n);

    sn = ((a1+an) * n)/2;

    printf("Sn e igual a = %d",sn);

    return 0;
}