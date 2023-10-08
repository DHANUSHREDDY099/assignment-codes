//to print given number in reverse order

#include <stdio.h>
int main()
{
    int number, rev = 0, remainder;
    printf("\nEnter a number: ");
    scanf("%d",&number);
    printf("\nReversed Number: ");
    while(number != 0)
    {
        remainder = number%10;
        rev = rev*10 + remainder;
        number /= 10;
    }

    printf("%d",rev);
    return 0;
}