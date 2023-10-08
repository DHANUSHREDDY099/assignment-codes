//to print if a triangle is equilateral or isosceles or scalene



#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c&&b+c>a&&c+a>b)
	{
		printf("it is a triangle\n");
	    if(a==b&&b==c&&c==a)
	    {
	    	printf("it is an equilateral triangle");
	 	}
	 	else if((a==b&&b==c&&b!=a)||(a==b&&b!=c&&b==a)||(a!=b&&b==c&&b==a))
	 	{
	 		printf("it is an isosceles triangle");
		}
		else
		{
			printf("it is a scalene triangle");
		}
	}
	else
	{
		printf("it is not a triangle");
	}

return 0;
}







