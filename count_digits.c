//write a code to count the digits in a number

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    int count=0;
    while (a>0)
    {
    a=a/10;
    count=count+1;
    }
    printf("The number of digits is %d",count);
}