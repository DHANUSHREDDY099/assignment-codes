// Q5. Write a program in C to find angle of an n sided polygon.
//     (use angle formula as float function)

#include <stdio.h>
int main()
{
    int n;
    float angle;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &n);
    angle = 180.0 * (n - 2) / n;
    printf("The angle in the polygon is: %.2f degrees\n", angle);
    return 0;
}