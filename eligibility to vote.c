#include <stdio.h>
int main()
{
// To find whether a person is eligible to vote or not ,when age is given
	int age;
	printf("enter your age : ");
	scanf("%d",&age);
	if (age >= 18)
	{
	  printf("you are eligible to vote.");
	}
	else
 	{ 
	printf("you are not eligible to vote.");
	}
	return 0;
}
