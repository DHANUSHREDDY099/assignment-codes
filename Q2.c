// Q2. Write a program in C to find wheter two matrices can be multiplied or not.
//     (use if else statement)

#include <stdio.h>
int main()
{
    int m, n;
    int p, q;
    printf("Enter the dimensions of first matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter the dimensions of second matrix: ");
    scanf("%d%d", &p, &q);
    if (n != p)
    {
        printf("Two matrices CANNOT be multiplied !!!\n");
    }
    else
    {
        printf("Two matrices meet the criteria for Multiplication !!!\n");
        printf("Dimensions of resultant matrix are: %dX%d", m, q);
    }
    return 0;
}