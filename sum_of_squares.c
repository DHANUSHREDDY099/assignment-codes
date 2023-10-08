//Write a code to get sum of squares of first n numbers

#include<stdio.h>
int main()
{
    int a,i=1,sum=0,sq;
    printf("Enter the number:",&a);
    scanf("%d",&a);
    while (i<=a)
    {
    sq=i*i;
    sum=sum+sq;
    i=i+1;
    }
    printf("The sum of the series is %d",sum);
}