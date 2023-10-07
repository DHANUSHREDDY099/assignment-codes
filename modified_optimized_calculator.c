// create a calculator consisting of elementary operations
#include <stdio.h>
#include <math.h>

int addnums(int a, int b);
int subnums(int a, int b);
int mulnums(int a, int b);
float divnums(int a, int b);
int maxnums(int a, int b);
float exponums(float a, float b);
void sortnums(int *a, int *b);

int addnums(int a, int b) {
    return a + b;
}

int subnums(int a, int b) {
    return a - b;
}

int mulnums(int a, int b) {
    return a * b;
}

float divnums(int a, int b) {
    if (b == 0) {
        printf("Division by zero is not allowed.\n");
        return 0.0;
    }
    return (float)a / b;
}

int maxnums(int a, int b) {
    return (a > b) ? a : b;
}

float exponums(float a, float b) {
    return (float)pow(a, b);
}

void sortnums(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int a, b;

    do {
        printf("Input a: ");
        scanf("%d", &a);
        printf("Input b: ");
        scanf("%d", &b);
        char inputgiven;

        printf("Choose from one of the following operations:\n");
        printf("add (+), subtract (-), multiply (*), divide (/), maximum number selection (M), exponents (^), quit (Q)\n");
        scanf(" %c", &inputgiven);  // Adding a space before %c to consume leading whitespace

        if (inputgiven == 'Q' || inputgiven == 'q') {
            break;  // Exit the loop when 'Q' or 'q' is entered.
        }

        switch (inputgiven) {
            case '+':
                printf("The sum is %d\n", addnums(a, b));
                break;
            case '-':
                printf("The difference is %d\n", subnums(a, b));
                break;
            case '*':
                printf("The product is %d\n", mulnums(a, b));
                break;
            case '/':
                printf("The result of division is %.2f\n", divnums(a, b));
                break;
            case 'M':
            case 'm':
                printf("The maximum number is %d\n", maxnums(a, b));
                break;
            case '^':
                printf("The exponential is %f\n", exponums(a, b));
                break;
            default:
                printf("Invalid operation.\n");
        }
    } while (1);

    return 0;
}
