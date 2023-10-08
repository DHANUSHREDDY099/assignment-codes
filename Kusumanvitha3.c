#include <stdio.h>

int main() {
    int num, i, sum = 0;
    float avg;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; ++i) {
        sum += i;
    }

    avg = (float)sum / num;

    printf("Average of first %d natural numbers is: %.2f", num, avg);

    return 0;
}