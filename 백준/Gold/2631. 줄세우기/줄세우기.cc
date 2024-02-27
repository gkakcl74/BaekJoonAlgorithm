#include <stdio.h>

int main() {
	int i, j, n, a[201], d[201], max = 0; 
	scanf("%d", &n);
	
    for (i = 1; i <= n; i++) 
	scanf("%d", &a[i]);

	for (i = 1; i <= n; i++) {
		d[i] = 1;
		for (j = 1; j < i; j++) 
		    if (a[j] < a[i] && d[i] < d[j] + 1)
				d[i]++;
		if (max < d[i]) max = d[i];
	}
	printf("%d", n - max);
}
