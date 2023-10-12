#include <stdio.h>
int main()
{
	int a,sum,i,total;
	printf("enter the number : ");
	scanf("%d",&a);
	sum=0;
	i=1;
	total=1;
	while (i <= a)
		{
		total=total*i;
		i=i+1;
		}
	printf("the total is %d. \n",total);	
	return 0;
}

