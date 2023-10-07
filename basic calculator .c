#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); 

    printf("Enter second number: ");
    scanf("%lf", &num2);

    result = (operator == '+') ? num1 + num2 :
             (operator == '-') ? num1 - num2 :
             (operator == '*') ? num1 * num2 :
             (operator == '/') ? ((num2 != 0) ? num1 / num2 : 0.0) :
             0.0; 

    printf("Result: %lf\n", result);

    return 0;
}
