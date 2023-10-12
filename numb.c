#include <stdio.h>
int main() {
    int n;
    printf("n is number\n");
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);

        if (n<= 0) {
            printf("Invalid input. Please enter a positive integer.\n");
        }
    } while (n<= 0);
    printf("You entered a valid positive integer: %d\n", n);
}