// Sohan Maity
// Roll - 523EC0001
// Email - 523ec0001@iiitk.ac.in
// ECE (Dual Degree)
// IIITDM Kurnool

//Question no - 4 : Print a diamond pattern in C language . 
// Make sure the middle line is not printed twice ?


#include <stdio.h>

int main()
{

    // Getting input of the number of rows from the user 


    int i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &i);

    // For loop

    // upper part of the diamond


    for(j=1; j<=i; j++)
    {
        for(k=1; k<=i-j; k++)
        {
            printf(" ");
        }
        for(k=1; k<=2*j-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    // The below part of the diamond


    for(j=i-1; j>=1; j--)
    {
        for(k=1; k<=i-j; k++)
        {
            printf(" ");
        }
        for(k=1; k<=2*j-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// Here I have used for loop to print the diamond pattern 

// I have first printed the upper part and then the below part making certain changes 

// Note : If you just make the increment values to decrement in the below part , then , 
// one extra line will be printed in the middle , that is why I have taken 
// ( j = i - 1 ) in the 2nd part for the inverted triangle part of the code .


// Thank You