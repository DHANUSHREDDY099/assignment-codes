2.If the total selling price of 15 items and the total profit earned
on them is input through the keyboard, write a program to
find the cost price of one item. 


#include <stdio.h>

int main() {
    float totalSellingPrice, totalProfit, costPrice;
    int numberOfItems = 15;

    printf("Enter the total selling price of 15 items: ");
    scanf("%f", &totalSellingPrice);
    printf("Enter the total profit earned on 15 items: ");
    scanf("%f", &totalProfit);


    costPrice = (totalSellingPrice - totalProfit) / numberOfItems;

    
    printf("The cost price of one item is: %.2f\n", costPrice);

    return 0;
}