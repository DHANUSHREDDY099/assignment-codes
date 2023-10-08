//write a c program to print table of a number//
#include<stdio.h>
int main()
{
int n,i;
printf("enter the value of n:");
scanf("%d",&n);
for(i=0;i<=10;i++)
{
printf("%d*%d=%d\n",n,i,n*i);
}
return 0;
}

