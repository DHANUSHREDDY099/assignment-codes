//Write a code to find roots of a quadratic equation

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,dis,r1,r2,real,img;
    printf("Enter coefficient of x^2:");
    scanf("%f",&a);
    printf("Enter the coefficient of x:");
    scanf("%f",&b);
    printf("Enter constant term:");
    scanf("%f",&c);
    dis=(b*b)-(4*a*c);
    if (dis>=0)
    {
    r1=(-b+sqrt(dis))/(2*a);
    r2=(-b-sqrt(dis))/(2*a);
    printf("The roots of the equation are %f and %f",r1,r2);
    }
    else {
    real=-b/(2*a);
    img=sqrt(-dis)/2*a;
    printf("The roots of the equation are %f+%fi and %f-%fi",real,img,real,img);
    }
}