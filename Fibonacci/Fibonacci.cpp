#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 1;
	int sum = 0;
	
	int n_terms = 10;
	printf("%d\n%d\n", x, y);

	for (int i = 0; i <= n_terms; i++)
	{
		sum = x + y;
		printf("%d\n", sum);
		x = y;
		y = sum;
	}

	return 0;

}