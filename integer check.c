//write a program to check no. of positive negative or zeros in  given 10 integers 
#include<stdio.h>
int main()
{
int i,num,p=0,n=0,z=0;
printf("enter any 10 integers");
for(i=1;i<=10;i++)
{
    printf("enter integer");
    scanf("%d",&num);
    if(num>0)
    p++;
    else if(num<0)
    n++;
    else
    z++;
}
printf("no. of positive %d",p);
printf("no. of negative %d",p);
printf("no. of zeros %d",p);
}
