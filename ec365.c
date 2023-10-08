// to cheak weather inputed number are pythagorian tripplet or not
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,j,i;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("enter the third number:");
    scanf("%d",&c);
    d=c*c;
    e=(a*a + b*b);
    g=a*a;
    h=(b*b + c*c);
    i=b*b;
    j=(c*c + a*a);
    if(d==e)
    {
        printf("%d , %d , %d , are Pythagorean triplet:)",a,b,c);
    }
    else if(g==h)
    {
        printf("%d , %d , %d , Pythagorean triplet:)",a,b,c);
    }
    else if(i==j)
    {
        printf("%d , %d , %d , are Pythagorean triplet:)",a,b,c);
    }
    else{
        printf("%d , %d , %d , are not Pythagorean triplet:)",a,b,c);
    }
}