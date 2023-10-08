3.Write a program using conditional operators to determine whether a year entered through the keyboard is a leap year or
not.

#include <stdio.h>

int main() {
    int year;
    
    // Input year from the user
    printf("Enter a year: ");
    scanf("%d", &year);
    
    // Check if it's a leap year using conditional operators
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    
    return 0;
}

 