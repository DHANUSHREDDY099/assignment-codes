//write a c program using switch case statement to select a days of the week//
#include<stdio.h>
int main( )
{
int n;
printf("select a day");
scanf("%d",&n);
switch(n)
{ 
case 1:printf("today is Monday");
break;
case 2:printf("today is tuesday");
break;
case 3:printf("today is wednesday");
break;
case 4:printf("today is thursday");
break;
case 5:printf("today is friday");
break;
case 6:printf("today is saturday");
break;
case 7:printf("today is sunday");
break;
default:printf("invalid number");
}
}

