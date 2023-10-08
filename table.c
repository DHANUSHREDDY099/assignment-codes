//write a program to print the table of  a given number
#include<stdio.h>
int main()
{
    int num;
printf("enter your number for which you want to create table : ");
scanf("%d",& num);

for( int i=1;i<11;i++)
{
printf("%d \n",num*i );
}
}