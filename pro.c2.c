2.If the total selling price of 15 items and the total profit earned 
on them is input through the keyboard, write a program to 
find the cost price of one item.


#include <stdio.h>

int main() {
    double totalSellingPrice, totalProfit;

    printf("Enter the total selling price of 15 items: ");
    scanf("%lf", &totalSellingPrice);

    printf("Enter the total profit earned on 15 items: ");
    scanf("%lf", &totalProfit);

    double costPricePerItem = (totalSellingPrice - totalProfit) / 15.0;

    printf("The cost price of one item is: %.2lf\n", costPricePerItem);

    return 0;
}
