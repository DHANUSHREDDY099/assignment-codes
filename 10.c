
// print  Fibonacci sequence using for loop

#include <stdio.h>

int main() {
    int n, i, term1 = 0, term2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        // Print the current term
        printf("%d, ", term1);

        // Calculate the next term
        nextTerm = term1 + term2;

        // Update terms for the next iteration
        term1 = term2;
        term2 = nextTerm;
    }

    return 0;
}
    