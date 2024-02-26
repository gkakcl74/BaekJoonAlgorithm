#include <stdio.h>

int main(){
	
	int n, m, a, b;
	int pa = 1000, on = 1000;
	
	scanf("%d %d", &n, &m);
	for(int i=0 ; i<m ; i++){
		scanf("%d %d", &a, &b);
		if(pa > a) pa = a;
		if(on > b) on = b;
	}
	a = n / 6;
	b = n % 6;
		
	if(pa > on * 6){
		printf("%d", on * n);
	}
	else if(pa <= on * b){
		printf("%d", pa * a + pa);
	}
	else{
		printf("%d", pa * a + on * b);
	}
	
}