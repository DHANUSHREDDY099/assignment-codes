//To find whether a given three digit number is armstrong or not
#include<stdio.h>
int main()
{
    int a,b,sum=0,c;
    printf("Enter a 3 digit number:");
    scanf("%d",&a);
    c=a;
    while (c>0)
    {
    b=c%10;
    sum=sum+(b*b*b);
    c=c/10;
    }
    if (sum==a)
    {
    printf("The number is an armstrong number");
    } 
    else 
    {
    printf("The number is not an armstrong number");
    }
}