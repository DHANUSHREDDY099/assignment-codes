#include <stdio.h>

int main() {

    int num1, num2, e ;

    printf("Enter two numbers \n") ;
    printf("and I will tell you the relation they satisfy:\n") ;
    scanf("%d %d", &num1, &num2) ;

    if (num1 == num2) {
        printf("numbers are equal \n") ;
    } else if (num1 > num2) {
        printf("1st number is greater than the 2nd") ;
    } else if (num1 < num2) {
        printf("1st number is lesser than the 2nd") ;
    } 

    scanf("%d", &e) ;

    return 0 ;
}
