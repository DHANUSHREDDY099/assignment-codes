/*write a program to calculate the BMI and say wether the person is underweight or obese or helthy
note that the formula for BMI is weight/height^2 where weigt in kg and height is in meters
if BMI is <18.5 -->under weight, >=18.5 and <24.9 -->helthy , <29.9 and >=25 -->over weight, else obese*/
#include<stdio.h>
int main()
{
    int weight,height;
    printf("enter weight in kg ");
    scanf("%d",& weight);
    printf("enter height in meters ");
    scanf("%d",& height);
int BMI;
    BMI=weight/(height*height);
    printf("\nYour BMI is : %d\n",BMI);

    if(BMI<18.5)
    {
        printf("You are underweight\n");

    }
    else if("BMI>=18.5 && BMI<24.9")
    {
        printf("You are healthy.\n");
    }
    else if("BMI>=25 && BMI<29.9")
    {
        printf("You are overweight.\n");
    }
    else
    {
        printf("You have obesity");
    }
    return 0;
}