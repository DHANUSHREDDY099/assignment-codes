//question:write a program to calculate simple interest
#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    // Input the principal amount, rate of interest, and time period
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    interest = (principal * rate * time) / 100;

    // Display the calculated simple interest
    printf("Simple Interest = %.2f\n", interest);

    return 0;
}