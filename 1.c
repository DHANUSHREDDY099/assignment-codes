
#include <stdio.h>
int main() {
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        fact *= n;
        n--;
    }
    printf("Factorial: %d\n", fact);
    return 0;
}