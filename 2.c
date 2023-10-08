// Program to count the number of digits in an
// integer using a loop

#include <stdio.h>
int main()
{
int n;
int count = 0;
printf(“\nEnter the number: “);
scanf(“%d”
, &n);
while(n != 0)
{
n = n/10;
++count;
}
printf(“\nNumber of digits: %d\n”
, count);
}
