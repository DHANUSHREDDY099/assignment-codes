//converting fahrenheit temperature to celsius temperature.
//f is the temperature in fahrenheit 
//c is the temperature in celsius

#include<stdio.h>
int main()
{
	int f,c;
	printf("enter f:");
	scanf("%d",&f);
	c=(f-32)*5/9;
	printf("%d",c);
	return 0;
	
}
