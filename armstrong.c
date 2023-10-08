#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder, result = 0;
    int n = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // Check if it's an Armstrong number
    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
