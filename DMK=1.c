// program on terminal and if else case
#include<stdio.h>

int main ()
{

int a,b,c;

scanf("%d%d%d" , &a,&b,&c);
(a>b)? printf("%d\n",a): printf("%d\n",b);

if (a>b && a>c)
{
printf("is greater %d",a);
}

else if (b>a && b>c)

{
printf(" b is greater %d" ,b);
}
else
{
printf("c is greater %d" ,c);
}

}