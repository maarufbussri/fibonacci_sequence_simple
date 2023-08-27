#include <stdio.h>

int main()
{
	int i = 0, j = 1, k, l = 1;

	printf("0 1 ");

	do
	{
		k = i + j; i = j; j = k; l = l++;
		printf("%d ", k);
	}
	while (l < 10);

	return 0;
}
