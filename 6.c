/*Write a program in C language to reverse a number.*/

#include <stdio.h>
int main()
{
    int number, rev = 0, remain;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0)
    {
        remain = number % 10;
        rev = rev * 10 + remain;
        number /= 10;
    }

    printf("Number after reversing : %d", rev);
    return 0;
}