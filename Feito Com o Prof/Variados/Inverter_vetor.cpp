/*
	Leia um vetor e inverta o vetor sem criar um novo
	
	A[8,0,1,7,6] --> A[6,7,1,0,8]
	
*/

#include <stdio.h>
#include <stdlib.h>
#define t 5

int main(){
	int A[t],j=4,aux;
	
	for(int i=0;i<t;i++){
		printf("A[%d]: ",i);
		scanf("%d",&A[i]);
	}
	
	for(int i=0;i<j;i++){
		aux=A[i];
		A[i]=A[j];
		A[j]=aux;
		j--;
	}
	
	for(int i=0;i<t;i++){
		printf("%d",A[i]);
	}
	
	return 0;
}
