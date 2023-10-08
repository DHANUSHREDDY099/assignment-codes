#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("Enter an operator (+, -, *, /, ^): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error! Division by zero.");
                return 0;
            }
            break;
        case '^':
            result = pow(num1, num2);
            break;
        default:
            printf("Error! Invalid operator.");
            return 0;
    }

    printf("Result = %.2lf", result);
    return 0;
}
