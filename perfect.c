#include<stdio.h>
int main ()
{
int n,i	
static bool isPerfect(int n)
{
	int sum = 1;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i==0)
		{
			if(i * i != n)
				sum = sum + i + n / i;
			else
				sum = sum + i;
		}
	} 
	if (sum == n && n != 1)
		return true;

	return false;
}
