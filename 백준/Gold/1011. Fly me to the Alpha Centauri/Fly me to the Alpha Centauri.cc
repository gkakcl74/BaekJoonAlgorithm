#include <stdio.h>

int Ptr(int d){
	
	long a, b, cnt = 0;
	
	if( d == 1 || d == 2 ){
		printf("%d\n", (d == 1) ? 1 : 2);
		return 0;
	}
		
	a = b = 2;
	while(1){
		
		if( cnt == 2 ){
			a++;
			cnt = 0;	
		}
		b+=a;
		cnt++;
		if( b >= d ){
			printf("%ld\n", (cnt == 2) ? a*2 : a*2 - 1);
			return 0;
		} 
		
	}
	
}


int main(){
	
	int i, t, x, y;
	scanf("%d", &t);
	for(i=0 ; i<t ; i++){
		scanf("%d %d", &x, &y);
		Ptr(y - x);
	}
	return 0;
	
}