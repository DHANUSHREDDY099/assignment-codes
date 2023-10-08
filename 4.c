#include <stdio.h>

int main() {
    int rows, spaces, stars;

    printf("\n\t\t\t *** Star Pattern Generator ***\n\n");

    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        
        for (spaces = 1; spaces <= rows - i; spaces++) {
            printf(" ");
        }

       
        for (stars = 1; stars <= 2 * i - 1; stars++) {
            printf("*");
        }

       
        printf("\n");
    }

    return 0;
}
