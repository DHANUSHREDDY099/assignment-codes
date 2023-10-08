#include<stdio.h>
int main()
char input;
float kmtomiles = 0.621371 miles;
float inchestofoot = 0.8333 foot;
float poundstokg = 0.453592 kg;
float inchestometer = 0.254 meter;
float first, second;
while(1)
{
printf("enter the input character\n 1. kmtomiles\n 2. inchestofoot\n 3. poundstokg\n 4. inchestometer\n");
scanf("%c", &input);
switch(input)
{
case 1:
printf("enter the quantity in terms of unit\n")
scanf("%c", &first);
second =first * kmtomiles;
printf("the value of %f is %f", input, first, second);
case 2:
printf("enter the quantity in terms of unit\n")
scanf("%c", &first);
second =first * inchestofoot;
printf("the value of %f is %f", input, first, second);
case 3:
printf("enter the quantity in terms of unit\n")
scanf("%c", &first);
second =first * poundstokg;
printf("the value of %f is %f", input, first, second);
case 4:
printf("enter the quantity in terms of unit\n")
scanf("%c", &first);
second =first * inchestometer;
printf("the value of %f is %f", input, first, second);
}
}
return 0;
}
