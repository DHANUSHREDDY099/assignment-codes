// Q1. Write a program in C to convert a Binary to its Decimal.
//     (use while loop,math.h)

#include <stdio.h>
#include <math.h>
int main()
{
    int number;
    int sum = 0;
    int i = 0;
    printf("Enter the number: ");
    scanf("%d", &number);
    while (number > 0)
    {
        sum += (number % 10) * pow(2, i);
        number /= 10;
        i++;
    }
    printf("The Decimal Value of Binary Number is %d", sum);
    return 0;
}