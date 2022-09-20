#include <stdio.h>
#include <stdlib.h>

int main(){
	int A, B, *pont1, *pont2;
	float Media, *pont3;
	
	printf("Informe A e B = ");
	scanf("%d %d", &A, &B);
	
	pont1 = &A;
	pont2 = &B;
	
	printf("%d %d %d %d\n", A, B, *pont1, *pont2);
	printf("%p %p %p %p\n", pont1, &A, pont2, &B);
	
	*pont2 += 10;
	
	printf("%d\n", B);
	
	Media = 1000;
	pont3 = &Media;
	
	printf("%.1f %.1f %p %p\n", Media, *pont3, &Media, pont3);
	
	return 0;
}
