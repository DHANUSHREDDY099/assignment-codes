Write a C program to find the sum of digits of a number using a 'switch' loop.
Ans:
#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10; // Extract the last digit
        number = number / 10; // Remove the last digit from the number

        switch (digit) {
            case 0:
                sum += 0;
                break;
            case 1:
                sum += 1;
                break;
            case 2:
                sum += 2;
                break;
            case 3:
                sum += 3;
                break;
            case 4:
                sum += 4;
                break;
            case 5:
                sum += 5;
                break;
            case 6:
                sum += 6;
                break;
            case 7:
                sum += 7;
                break;
            case 8:
                sum += 8;
                break;
            case 9:
                sum += 9;
                break;
            default:
                printf("Invalid input!");
                return 1;
        }
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}