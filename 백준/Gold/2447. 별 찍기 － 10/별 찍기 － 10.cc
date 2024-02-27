#include <stdio.h>

void star(int x, int y , int size){
	
	if ((x / size) % 3 == 1 && (y / size) % 3 == 1) { 
		printf(" ");
	}
	else if(size / 3 == 0) printf("*");
	else star(x, y, size/3);
}


int main(){
	
	int N,x,y;
	scanf("%d", &N);
	
	for(x=0 ; x<N ; x++){
		for(y=0 ; y<N ; y++)
			star(x, y, N);
		printf("\n");	
	}
	return 0;
	
}
