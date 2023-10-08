Write a C program to find the sum of the digits of a number until the sum becomes a single-digit number using a while loop.
Ans:
#include <stdio.h>

int main() {
    int num, sum = 0;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the sum of digits until it becomes a single-digit number
    while (num > 0 || sum > 9) {
        if (num == 0) {
            num = sum;
            sum = 0;
        }
        sum += num % 10;
        num /= 10;
    }

    // Display the result
    printf("The single-digit sum is: %d\n", sum);

    return 0;
}
