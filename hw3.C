#include <stdio.h>

int main(void)
{
	for (int k = 0; k < 5; k++)
	{
		for (int j = k; j < 4; j++)
		{
			printf(" ");
		}
		for (int h = 0; h < k * 2 + 1; h++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}