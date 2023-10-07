#include <stdio.h>
int main() 
{
int day;
printf("Enter Day Number\n");
scanf("%d", &day);
if(day < 1 || day > 7)
{
printf("Invalid Input !!!!\n");
return 0;
}
if(day == 1) 
{
printf("Monday\n"); 
}
 else if(day == 2) 
 {
printf("Tuesday\n");
}
 else if (day == 3)
 {
printf("Wednesday\n");
} 
else if(day == 4) 
{ 
printf("Thursday\n");
}
 else if(day == 5)
 {
printf("Friday\n");
}
 else if(day == 6)
 {
printf("Saturday\n");
} 
else 
{
printf("Sunday\n");
}
return 0;
}