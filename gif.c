//Write a program to find GIF of a given number

#include <stdio.h>

int main() {

    double num1, num2 ;
    int gif ;
    printf("Enter a number : ") ;
    scanf("%lf", &num1) ;
    num2 = num1 ;

    while (num1 >= 1) {
        num1-- ;
    }

    if (num1 == 0) {
        printf("The entered number is an natural number") ;
    } else {
        printf ("The entered number has some fractional part");
        printf ("\nThe decimal part of the number is %lf", num1) ;
    }
    gif = num2 - num1 ;
    printf("\n[%lf] = %d", num2, gif) ;
}