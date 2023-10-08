//Sum of factorial of n numbers

#include<stdio.h>
int main()
{
    int a,i=1,fact=1,sum=0;
    printf("Enter the number to get sum of series");
    scanf("%d",&a);
    while (i<=a)
    {
    fact=fact*i;
    i++;
    sum=sum+fact;
    }
    printf("The sum of series is %d",sum);
}