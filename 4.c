#include <stdio.h>

int main()
{
    int n, i;
    int sum;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    sum = 0;

    for (i = 1; i <= n; i++)
        sum += i;

    printf("Sum is: %d\n", sum);

    return 0;