/* Write a C program to check whether the given number is an Armstrong number. */
#include <stdio.h>
int main()
{
    int number, rem, sum = 0, x;

    printf("Enter a number: ");
    scanf("%d", &number);

    x = number;
    while (number > 0)
    {
        rem = number % 10;
        sum = sum + (rem * rem * rem);
        number = number / 10;
    }
    if (x == sum)
    {
        printf("Given number is an Armstrong number.\n");
    }
    else
    {
        printf("Given number is not an Armstrong number.\n");
    }

    return 0;
}