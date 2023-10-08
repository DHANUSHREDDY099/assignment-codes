// comparsion between the car prices using if else loop given by the user
# include <stdio.h>
int main ()
{
    int car_price;
    printf("enter your car price\n");
    scanf("%d",&car_price);
    if(car_price<500000)
    {
        printf("buy the verna car");
    }
    else if(car_price<1500000)
    {
        printf("buy the harrier car");
    }
    else if(car_price<3000000)
    {
printf("buy the audi car");
    }
    else if(car_price<5000000)
    {
        printf("buy the bmw car");
    }
    else if (car_price<6000000)
    {
        printf("buy the ferrari car");
    }
}