#include <stdio.h>
int main()
{
	int i,a,b;
	printf("enter the number of terms : ");
	scanf("%d",&a);
	for (i=0 ;i <= a; i=i+1)
	{
		printf("number is %d ",i);
		printf("and cube of the %d is",i);
		b=i*i*i;
		printf(": %d",b);
		printf("\n");
	}
	return 0;
}
