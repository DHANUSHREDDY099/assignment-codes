//a,c are the x coordinates values
//b,d are the y coordinates values


#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter a,b,c,d:\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(b/a==d/a)
	{
		printf("both points lie on the same line");
	}
	else
	{
		printf("both points doesn't lie on the same line ");
	}
return 0;
	
}
