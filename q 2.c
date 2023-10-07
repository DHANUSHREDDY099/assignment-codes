//write a program to print star rhombus pattern with user input
#include <stdio.h>
 
int main() 
{
    int i, j, rows;
 
    printf("Enter the number of rows\n");
    scanf("%d", &rows);
 
    for (i = 0; i < rows; i++) {
        /* spaces before stars in a row */
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        /* Print rows stars after spaces in a row */
        for (j = 0; j < rows; j++) {
            printf("*");
        }
        /* jump to next row */
        printf("\n");
    }
    return 0;
}