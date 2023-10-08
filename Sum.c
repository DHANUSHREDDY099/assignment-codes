//Write a program to find sum of n natural numbers

#include <stdio.h>

int main() {

    int i = 0, sum = 0, times ;
    scanf("%d", &times) ;

    while (i < times) {
        i+=1 ;
        sum = sum + i ;
    }

    
    printf("%d", sum) ;
    return 0 ;
}