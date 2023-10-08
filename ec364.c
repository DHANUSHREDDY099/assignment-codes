// to confirm weather inputed side can form a triangle or not
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first side of triangle");
    scanf("%d",&a);
    printf("enter the second side of triangle");
    scanf("%d",&b);
    printf("enter the third side of triangle");
    scanf("%d",&c);
    if(a+b>c && b+c>a && a+c>b)
    {printf("these side can form a triangle");}
    else{
        printf("these side can not form a triangle:)");
    }
}