// write a program to print the given array of numbers in reverse order
#include<stdio.h>
int main()
{
    int num;
    printf("how many number you want to reverse  ");
    scanf("%d",&num);
    int list[num];


    for(int i=0;i<num;i++)
    {
        printf("enter your number %d ",i+1);
        scanf("%d",& list[i]);
    }
    for(int i=num-1;i>=0;i--)
    {
        printf("%d\n",list[i]);
    }
    return 0;
}