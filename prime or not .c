#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
        return 1;
    }
    
    printf("First %d prime numbers are:\n", n);
    
    int count = 0;
    int num = 2; 
    
    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    
    printf("\n");
    
    return 0;
}
