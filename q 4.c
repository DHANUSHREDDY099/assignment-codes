//take two input integrs input a and b:a>b and find the remainder when a is divided by b and print the remainder
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter dividend");
    scanf("%d",&a);
    printf("enter divisor");
    scanf("%d",&b);
    int q=a/b;
    int r= a-(b*q);
    printf("the remainder when %d is divided by %d is : %d",a,b,r);
    return 0;
}