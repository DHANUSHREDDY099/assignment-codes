#include <stdio.h>

int main() {
    int n;


    printf("Enter the number of values: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1; 
    }


    double values[n];
    double sum = 0.0;

    printf("Enter %d values, one at a time:\n", n);


    for (int i = 0; i < n; ++i) {
        scanf("%lf", &values[i]);
        sum += values[i];
    }


    double average = sum / n;


    printf("The average of the %d values is: %.2lf\n", n, average);

    return 0;
}
