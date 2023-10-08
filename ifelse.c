Write a program to find the maximum of two numbers using if-else statement.
Ans;
 #include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Compare the numbers and find the maximum
    if (num1 > num2) {
        printf("Maximum number is: %d\n", num1);
    } else if (num2 > num1) {
        printf("Maximum number is: %d\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}