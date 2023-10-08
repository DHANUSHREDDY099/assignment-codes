//to print the floating number between n and m with an interval 0.1 till one decimal
//n is the starting number
//m is the ending number
#include<stdio.h>
int main()
{
	float  n,m,i,j;
	printf("enter number n\n");
	scanf("%f",&n);
	printf("enter number m\n");
	scanf("%f",&m);
	for(i=n;i<=m;i=i+0.1)
	{
		printf("floating numbers are %0.1f\n",i);
	}
    return 0;




}