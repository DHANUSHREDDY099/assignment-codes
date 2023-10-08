#include <stdio.h>

int main() {
    double num1, num2, task, e ;

    printf("Enter First Number : ") ;
    scanf("%lf", &num1) ;
    printf("\n") ;
    printf("Enter Second Number : ") ;
    scanf("%lf", &num2) ;
    printf("\n") ;
    printf("Select a function :\n\n(1) Add\n(2) Subtract\n(3) Multiply\n(4) Divide\n\n") ;
    scanf("%lf", &task) ;
    printf("\n") ;

    if (task == 1) {
        printf("%lf", num1+num2) ;
    }
    else if (task == 2) {
        printf("%lf", num1-num2) ;
    }
    else if (task == 3) {
        printf("%lf", num1*num2) ;
    }
    else if (task == 4) {
        printf("%lf", num1/num2) ;
    }

    scanf("%lf", &e) ;

}