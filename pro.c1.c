1.Two numbers are input through the keyboard into two 
locations C and D. Write a program to interchange the 
contents of C and D.

#include <stdio.h>

int main() {
    int C, D, temp;
    printf("Enter the value for C: ");
    scanf("%d", &C);

    printf("Enter the value for D: ");
    scanf("%d", &D);
    temp = C;
    C = D;
    D = temp;

    printf("After swapping, the value of C is: %d\n", C);
    printf("After swapping, the value of D is: %d\n", D);

    return 0;
}
