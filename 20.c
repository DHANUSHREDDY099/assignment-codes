
// print triangle with numbers using nesterd for

#include <stdio.h>

int main() {
    int rows, i, j, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }

        // Print numbers in ascending order
        for (j = 1; j <= i; j++) {
            printf("%2d", num++);
            printf(" ");
        }

        printf("\n");
    }

    return 0;
}
