#include <stdio.h>
int main()
{
//To find the average of 3 numbers.
	float avg,sum;
	int a,b,c;
	printf("enter the first number : ");
	scanf("%d",&a);
	printf("enter the second number : ");
	scanf("%d",&b);
	printf("enter the third number : ");
	scanf("%d",&c); 
	sum = a+b+c;
	avg = sum/3;
	printf("The average is %f",avg);
	return 0;
}
