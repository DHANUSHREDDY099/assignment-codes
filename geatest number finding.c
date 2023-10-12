#include<stdio.h>
int main( )
{
    int a,b,c;
    printf("enter the a");
    scanf("%d",&a);
    printf("enter the b");
    scanf("%d",&b);
    printf("enter the c");
    scanf("%d",&c);
    if(a>b&&a>c)
        printf("a is greatest");

    if(b>a&&b>c)
        printf("b is greastest");
    if(c>a&&c>a)
        printf("c is greatest");
    


}