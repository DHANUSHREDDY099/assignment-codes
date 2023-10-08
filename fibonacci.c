#include <stdio.h>

int main() {
    int n, firstTerm = 0, secondTerm = 1, nextTerm;

    
    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence (first %d terms):\n", n);

    printf("%d, %d, ", firstTerm, secondTerm);

    for (int i = 3; i <= n; ++i) {
        nextTerm = firstTerm + secondTerm;
        printf("%d, ", nextTerm);

        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    printf("\n");

    return 0;
}
