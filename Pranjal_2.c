// Pranjal Upadhyay
// Roll - 523EC0012
// Email - 523ec0012@iiitk.ac.in
// ECE (Dual Degree)
// IIITDM Kurnool


// Question : 2 - Print a butterfly type code getting input of no of lines from the user ?
// The pattern will look like 2 triangles printed side by side .


#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of lines for the butterfly pattern: ");
    scanf("%d", &n);

    // Upper part of the butterfly
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the butterfly
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


// In this code , I tried to print the upper part 1st and then I decremented the values that was incremented 
// in the upper part to print the bottom part of the code using C language exclusively the For loop .


// Thank You