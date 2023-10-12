// sum of n natural numbers //

#include <stdio.h>

int main() {
    int n,sum;

    printf("Enter a positive integer : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n should be a positive integer.\n");
    } else {
        // Calculate the sum of the first n natural numbers
        for (int i = 1; i <= n; i++) {
            sum += i;
        }

        printf("Sum of the first %d natural numbers is :: %d\n", n, sum);
    }
}