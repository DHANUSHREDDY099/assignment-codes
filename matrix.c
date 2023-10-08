//Write a program to find the determinant of a given matrix

#include <stdio.h>

int main() {
    printf("\t\tMatrix Format\n") ;
    printf("\t\ta1   a2   a3\n") ;
    printf("\t\tb1   b2   b3\n") ;
    printf("\t\tc1   c2   c3\n\n") ;
    float a1, a2, a3, b1, b2, b3, c1, c2, c3 ;
    printf("Enter a1, a2, a3 : ") ;
    scanf("%f%f%f", &a1, &a2, &a3) ;
    printf("Enter b1, b2, b3 : ") ;
    scanf("%f%f%f", &b1, &b2, &b3) ;
    printf("Enter c1, c2, c3 : ") ;
    scanf("%f%f%f", &c1, &c2, &c3) ;

    float output = (a1*(b2*c3 - c2*b3) -a2*(b1*c3 - b3*c1) + a3*(b1*c2 - b2*c1)) ;
    printf("\nThe determinant = %f", output) ;
    return 0 ;
    int num1, num2 ;
    printf("Enter a no: ") ;
    scanf("%d", &num1) ;
    printf("Enter another no: ") ;
    scanf("%d", &num2) ;

    
}

int add(int a, int b) {
    return a+b ;
}