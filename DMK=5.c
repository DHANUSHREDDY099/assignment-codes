// program on nests

#include<stdio.h>

int main()
{
int a,b,c,d;
scanf("%d%d%d%d ,&a,&b,&c,&d");
if (a>4)
{
a=a+2;
if (b>8)
{
b=b+3;
if (c>12)
{
c=c+14;
printf("%d",c);
}
if (d>15)
{
d=d+20;
printf("%d",d);
}
}
}
}
    