#include<stdio.h>
int main()
{
int day;
printf("enter the day you want to know\n");
scanf("%d"; &day);
switch(day)
{
case 1:
printf("the day is monday");
break;
case 2:
printf("the day is tuesday");
break;
case 3:
printf("the day is wednesday");
break;
case 4:
printf("the day is thursday");
break;
case 5:
printf("the day is friday");
break;
case 6:
printf("the day is saturday");
break;
case 7:
printf("the day is sunday");
break;
default :
printf("nothing matched go back to your home and learn all days name");
}
return 0;
}