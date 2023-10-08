// sum of all even numbers using while loop//#include<stdio.h>
int main()
{
int i;
int sum;
int n;
printf("enter last number:\n");
scanf("%d",&n);
sum=0;
i=2;
while (i<=n)
{
  if(i%2==0)
   {
    sum=sum+i;
   }
   i++;
 }
printf("sum of even numbers from 1 to %d is %d\n",n,sum);
return 0;
}


