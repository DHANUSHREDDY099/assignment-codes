#include <stdio.h>


int main() {
    double a[4][4];


    printf("\t\t\t*** Determinant Calculator ***\n\n");

    printf("Enter a11: ");
    scanf("%lf", &a[1][1]);

    printf("Enter a12: ");
    scanf("%lf", &a[1][2]);

    printf("Enter a13: ");
    scanf("%lf", &a[1][3]);

    printf("Enter a21: ");
    scanf("%lf", &a[2][1]);

    printf("Enter a22: ");
    scanf("%lf", &a[2][2]);

    printf("Enter a23: ");
    scanf("%lf", &a[2][3]);

    printf("Enter a31: ");
    scanf("%lf", &a[3][1]);

    printf("Enter a32: ");
    scanf("%lf", &a[3][2]);

    printf("Enter a33: ");
    scanf("%lf", &a[3][3]);

    double result =
        a[1][1] * ((a[2][2] * a[3][3]) - (a[2][3] * a[3][2])) -
        a[1][2] * ((a[2][1] * a[3][3]) - (a[2][3] * a[3][1])) +
        a[1][3] * ((a[2][1] * a[3][2]) - (a[2][2] * a[3][1]));

    printf("Determinant: %lf\n", result);

    return 0;
}
