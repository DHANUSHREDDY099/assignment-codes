
#include <stdio.h>
int main() {
    int i = 2, sum = 0;
    do {
        sum += i;
        i += 2;
    } while (i <= 100);
    printf("Sum of even numbers: %d\n", sum);
    return 0;
}