5.Two numbers are entered through the keyboard. Write a 
program to find the value of one number raised to the power 
of another.


#include <stdio.h>

double power(double base, int exponent) {
    double result = 1.0;

    if (exponent < 0) {
        base = 1 / base;
        exponent = -exponent;
    }

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    double base;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    double result = power(base, exponent);
    printf("%.2lf raised to the power %d is %.2lf\n", base, exponent, result);

    return 0;
}
