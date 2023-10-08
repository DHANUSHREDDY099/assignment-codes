//write a c program to add two numbers using functions//
#include<stdio.h>
int sum(int a, int b);
int main() {
	int num1, num2;
	printf("Enter the first number\n");
	scanf("%d", &num1);
	printf("Enter the second number\n");
 	scanf("%d", &num2);
	printf("%d + %d = %d\n", num1, num2, sum(num1,num2));
	return 0;
}

int sum(int a, int b) 
{
	return a+b;
}