#include <stdio.h>

int main(void)
{
	int num[10], input;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &input);
		num[i] = (input % 42);
	}

	int result = 0;
	for (int i = 0; i < 10; i++)
	{
		int cnt = 0;
		for (int j = i+1; j < 10; j++)
		{
			if (num[i] == num[j]) cnt++;	
		}
		if (cnt == 0) result++;	
	}
	printf("%d", result);
}