#include <stdio.h>

int main() {
    int rows, spaces, asterisks;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    
    for (int i = 1; i <= rows; i++) {
        
        for (spaces = 1; spaces <= rows - i; spaces++) {
            printf(" ");
        }

        
        for (asterisks = 1; asterisks <= 2 * i - 1; asterisks++) {
            printf("*");
        }

        
        printf("\n");
    }

    return 0;
}
