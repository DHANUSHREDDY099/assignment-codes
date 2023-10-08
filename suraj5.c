#include<stdio.h>
int main()
{
int a,i,j;
printf("enter the value of n ");
scanf("%d",&a);
for (i=1;i<=a;i++)
{
   for(j=i;j<=a;j++)
   {
    printf(" ");
   }
    for(int k=1;k<=i;k++)
    {
        printf("%d ",k);
    }
printf("\n");
}
return 0;
}