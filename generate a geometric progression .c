#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int first, ratio, terms, value, sum=0, i;
 
    printf("Enter the number of terms in GP series\n");
    scanf("%d", &terms);
 
    printf("Enter first term and common ratio of GP series\n");
    scanf("%d %d", &first, &ratio);
 
    /* print the series and add all elements to sum */
    value = first;
    printf("GP SERIES\n");
    for(i = 0; i < terms; i++) {
        printf("%d ", value);
        sum += value;
        value = value * ratio;
    }
 
    printf("\nSum of the GP series till %d terms is %d\n", terms, sum);
    return 0;
}
