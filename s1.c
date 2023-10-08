//to print the prime numbers between two numbers excluding the given two numbers
//n is the starting number
//m is the ending number
//if there is no prime number between the given two numbers then it won't print anything
#include<stdio.h>
int main()
{
	int n,m,i,j,c,temp;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter m:");
	scanf("%d",&m);
	
	for(i=(n+1);i<=(m-1);i++)
	{
		for(j=2;j<i;j++)
		{
			c=i%j;
			if(c!=0)
			continue;
			else
			break;
		}
	
	   if(c!=0)
		printf("%d\n",i);
	  
	}
     return 0;
 }





