
#include <stdio.h>
int main() {
    char a;
    double num1, num2, result;

    printf("Enter a (+, -, *, /): ");
    scanf(" %c", &a);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (a) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}