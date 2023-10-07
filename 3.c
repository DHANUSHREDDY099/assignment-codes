//3)find sum of first n natural numbers
#include <stdio.h>
void main()
{
   int i,n,sum=0;
   printf("Input Value of terms : ");
   scanf("%d",&n);
   printf("\nThe first %d natural numbers are:\n",n);
   for(i=1;i<=n;i++)
   {
     printf("%d ",i);
     sum+=i;
   }
   printf("\nThe Sum of natural numbers upto %d terms : %d \n",n,sum);
}