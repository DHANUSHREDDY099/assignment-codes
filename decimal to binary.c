#include <stdio.h>

int main() {
    int decimalNumber, binaryNumber = 0, base = 1, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    while (decimalNumber > 0) {
        remainder = decimalNumber % 2;
        binaryNumber = binaryNumber + remainder * base;
        decimalNumber = decimalNumber / 2;
        base = base * 10;
    }

    printf("Binary equivalent: %d\n", binaryNumber);

    return 0;
}
