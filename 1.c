//Program to find prime numbers in a given
//range using a loop

#include <stdio.h>
int main() {
int min, max, i, j, count;
printf("Enter the min and max values: ");
scanf("%d", &min);
scanf("%d", &max);
printf("Prime numbers between %d and %d are: ", min, max);
for (i = min; i <= max; i++) {
count = 0;
for (j = 1; j <= i; j++) {
if (i % j == 0)
count++;
}
if (count == 2)
printf("%d ", i);
}
printf("\n");
return 0;
}
