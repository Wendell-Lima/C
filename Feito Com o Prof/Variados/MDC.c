#include <stdio.h>


int main(){
	int x,y,m;
	
	printf("Digite dois valores para x e y: ");
	scanf("%d %d",&x,&y);
	
	if(x<0){
		x = x*(-1);
	}
	if(y<0){
		y = y*(-1);
	}
	
	if(x == 0 || y == 0){
		if(x==0 && y!=0){
			m = y;
		}
		else{
			m = x;
		}
	}
	else{
		while(x!=y){
			if(x>y){
				x = x - y;
			}
			else{
				y = y - x;
			}
		}
		m = x;
	}
	printf("MDC = %d",m);
	
	return 0;	
}


