#include <stdio.h>
#include <math.h>

int main() {
    double num1 = 1 ;

    printf("Enter the number you want to get square root of\n") ;
    printf("To exit enter \"0\"\n\n") ;
    

    while(num1 > 0) {
        scanf("%lf", &num1) ;
        printf("The Square root of %lf is %lf\n\n", num1, sqrt(num1)) ;
    }
}