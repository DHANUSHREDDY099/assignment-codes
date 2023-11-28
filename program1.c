/*WCP to display floating numbers between m and n with 
an interval of 0.1. For example, if m = 0 and n = 0.5, then 
the numbers to be displayed are 0, 0.1, 0.2, 0.3, 0.4, 0.5 
(show only one value after decimal)*/

#include<stdio.h>
int main(){
 float a ,b,c;
 printf("enter starting value\n");
 scanf("%f",&a);
 printf("enter ending value\n");
 scanf("%f",&b);
 for(float i=a; i<=b; i+=0.1)
 {
 printf("%.1f",i);
 printf("\n");
 }
return 0;
}