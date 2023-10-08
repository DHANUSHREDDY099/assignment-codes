
//  print a code to convert a decimal number to binary 

#include <stdio.h>

int main() {
    int decimalNumber, remainder, binary[32], i = 0;

    // Get the decimal number from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Convert decimal to binary
    while (decimalNumber > 0) {
        binary[i] = decimalNumber % 2;
        decimalNumber = decimalNumber / 2;
        i++;
    }

    // Print the binary representation in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");

    return 0;
}
