#include <stdio.h>

/*MMC*/

int main(){
	int A,B,C,X;
	
	printf("Digite um valor para A e B: ");
	scanf("%d %d" ,&A,&B);
	
	C = 1;
	
	while(C <= A & C <= B){
		if(A % C == 0 && B % C == 0){
			X = C;
		}
		C++;
	}
	printf("Valor de X = %d",X);
}
