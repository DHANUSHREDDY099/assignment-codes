// write a program to find the roots of quadratic equations//
#include<math.h>#include<stdio.h>
int main()
{
float a,b,c,D,root1,root2;
printf("enter the coefficients a,b,c");
scanf("%f%f%f",&a,&b,&c);
D=b*b-4*a*c;
if(D>0)
{
root1=(-b+sqrt(D)/2*a);
root2=(-b-sqrt(D)/2*a);
printf("root1=%f and root2=%f",root1,root2);
}
else if(D==0)
{
root1=root2=-b/2*a;
printf("root1=root2=%f",root1);
}
else
{
printf("No roots ");
}
return 0;
}



