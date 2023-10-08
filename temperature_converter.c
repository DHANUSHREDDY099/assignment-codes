//create a temperature converter that converts from one scale to other based on user inputs
#include<stdio.h>
int main()
{
    float in,celsius,fahrenheit;
    printf("choose between 1 if centigrade and 2 if fahrenheit: ");
    scanf("%f",&in);
    if(in==1)
    {
    printf("enter temperature in celsius  ");
    scanf("%f",&celsius);
    fahrenheit = celsius*9/5 + 32;
    printf("%f",fahrenheit);
    }
    else
    {
    printf("enter temperature in fahrenheit  ");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit - 32 ) * 5/9;
    printf("%f",celsius);
    }
    
}
