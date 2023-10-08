#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("10 numbers before:\n");
    for(i = num - 10; i < num; ++i) {
        printf("%d ", i);
    }

    printf("\n10 numbers after:\n");
    for(i = num + 1; i <= num + 10; ++i) {
        printf("%d ", i);
    }

    return 0;
}