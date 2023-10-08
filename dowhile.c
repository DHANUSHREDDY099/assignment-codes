//Write a C program using a `do-while` loop to reverse a number entered by the user
#include <stdio.h>

int main() {
    int number, reversedNumber = 0, digit;

    // Ask the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Reverse the number using a do-while loop
    do {
        digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    } while (number != 0);

    // Print the reversed number
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}
