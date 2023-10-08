
//Write a program in C to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].


#include <stdio.h>

void main()
{
	float x,sum,no_row;
	int i,n;
	printf("Input the value of x :");
	scanf("%f",&x);
	printf("Input number of terms : ");
	scanf("%d",&n);
	sum =1; no_row = 1;
	for (i=1;i<n;i++)
	{
	  no_row = no_row*x/(float)i;
	  sum =sum+ no_row;
	}
	printf("\nThe sum  is : %f\n",sum);
}