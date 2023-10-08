//write a program to find the factors of a given number
#include<stdio.h>
int main()
{
    int num;
    printf("enter your number ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
       if(num %i==0)
       {
        printf("%d\n",i);

       } 
    }
    return 0;
}