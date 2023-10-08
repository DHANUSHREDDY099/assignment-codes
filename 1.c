/* print pattern using nested for loop 
****
*  *
*  *
****  */
#include<stdio.h> 
int main()
{
int i,j;
for(j=1;j<=4;j++)
{
for(i=1;i<=4;i++)
{
if (i==1|| i==4 || j==1|| j==4)
printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}