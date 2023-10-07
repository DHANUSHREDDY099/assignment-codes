#include<stdio.h>


int main()
{
	int i, j, k;
	for (i = 1; i <= 30; i++)
	{
		for (j = i; j <= 30; j++)
		{
			for (k = j; k <= 30; k++)
			{
				if (i*i + j*j == k*k || j*j + k*k == i*i || i*i + k*k == j*j)
					printf("\n%d %d and %d", i, j, k);
			}
		}
	}
	printf(" are all pythogorian triplets.\n");
	
	return 0;
}