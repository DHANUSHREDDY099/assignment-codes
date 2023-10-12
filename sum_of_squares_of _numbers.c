
//finding the  sum of squares  using while loop //

#include<stdio.h>
int main()
{
    int x,i=1,sum,sq;
    printf("Enter the number:",&x);
    scanf("%d",&x);
    while (i<=x)
    {
    sq=i*i;
    sum=sum+sq;
    i=i+1;
    }
    printf("The sum of the series is %d",sum);
}