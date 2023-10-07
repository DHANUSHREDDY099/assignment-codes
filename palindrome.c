// check whether given 3 digit  number is palindrome or not?
// palindrome: number that is same backwads as forwords
#include<stdio.h>
int main()
{
int n,a,b,c,reverse,x;
printf("enter 3 digit number");
scanf("%d",&n);
x=n;
a=n%10;
n=n/10;
b=n%10;
n=n/10;
c=n%10;
reverse=a*100+b*10+c*1;
printf("reverse of 3 digit number is%d",reverse);
if(x==rev)
printf("it is palindrome number");
else
("it is not palindrome number");

}