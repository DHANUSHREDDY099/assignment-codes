// Write a C program to input the numeric week day value (starting from Monday as 1) and display the corresponding name of the week day
#include<stdio.h>
int main() {
    char n;
    printf("Enter any number from 1-7\n");
    scanf("%c", &n);
    switch(n) {
    case '1':
              printf("Monday");
              break;
    case '2': 
              printf("Tuesday");
              break;
    case '3': 
              printf("Wednesday");
              break;
    case '4': 
              printf("Thursday");
              break;
    case '5': 
              printf("Friday");
              break;
    case '6': 
              printf("Saturday");
              break;
    case '7': 
              printf("Sunday");
              break;
    default:
             printf("Error");
    }
    return 0;
}