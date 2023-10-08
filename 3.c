//Program to find the sum of numbers in a given
// range is given below.

#include<stdio.h>
int main()
{
int start, end;
scanf(“%d”,&start);
scanf(“%d”,&end);
int i, sum = 0;
for(i = start; i <= end; i++)
{
sum = sum + i;
}
}