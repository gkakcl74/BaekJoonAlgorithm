#include <stdio.h>

int arr[1000001] = {0, };

int main(){
	int M, N;
	long long i, j;
	
	arr[0] = 1, arr[1] = 1;
	for(i=2 ; i<1000001 ; i++){
		if(arr[i] == 1){
			continue;
		}
		arr[i] = 0;
		
		for(j=i*i ; j<1000001 ; j += i){
			arr[j] = 1;
		}
	}
	
	scanf("%d %d", &M, &N);
	for(i=M ; i<=N ; i++){
		if(arr[i] == 0)
			printf("%lld\n", i);
	}
	return 0;
}