// sum of n natural numbers using do while loop //

#include <stdio.h>

int main() 
{   int n, sum ;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    do 
    { sum += n;
      n--;}while(n>=0);
    printf("Sum of the numbers: %d\n", sum);
}  
