//question:write a program to check whether the triangle satisfies pythagoras theorem or not
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if the sum of squares of two smaller numbers equals the square of the largest number
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        printf("The numbers satisfy the Pythagoras theorem.\n");
    } else {
        printf("The numbers do not satisfy the Pythagoras theorem.\n");
    }

    return 0;
}