#include <stdio.h>

int main(){
	float altura_c=1.5,altura_j=1.1;
	int anos=0;
	
	while(altura_j<altura_c){
		altura_j += 0.03;
		altura_c += 0.02;
		anos++;
	}
	printf("Levara %d anos",anos);
	
	return 0;
}
