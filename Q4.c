#include <stdio.h>

int main() {
    int start, end;
    printf("Enter the starting and ending integers: ");
    scanf("%d %d", &start, &end);
    
    int sum = 0;
    int current = start;

    while (current <= end) {
        if (current % 2 == 0) {
            sum += current;
        }
        current++;
    }

    printf("Sum of even numbers: %d\n", sum);
    return 0;
}