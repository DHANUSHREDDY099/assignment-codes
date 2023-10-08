#include <stdio.h>

int main() {
    int n, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        do {
            factorial *= n;
            n--;
        } while (n > 0);
        printf("Factorial: %d\n", factorial);
    }
    return 0;
}