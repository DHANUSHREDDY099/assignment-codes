#include <stdio.h>

int main() {
    int decimal, binary[32], i = 0;

    printf("\t\t\n *** Decimal to Binary Converter ***\n\n");

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal == 0) {
        printf("Binary representation: 0\n");
    } else {
        while (decimal > 0) {
            binary[i] = decimal % 2;
            decimal = decimal / 2;
            i++;
        }

        printf("Binary representation: ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
        printf("\n");
    }

    return 0;
}
