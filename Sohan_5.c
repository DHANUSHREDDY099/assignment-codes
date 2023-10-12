// Sohan Maity
// Roll - 523EC0001
// Email - 523ec0001@iiitk.ac.in
// ECE (Dual Degree)
// IIITDM Kurnool

// Question 5 : Print a pattern depicting a Christmas Tree using stars " * " for the triangular trunk
// and " | " for the trunk , get the input of no of rows in the trunk from the user ?


#include <stdio.h>

int main() {
    int n, i, j, space;

    // Number of rows in the tree
    printf("Enter the number of rows in the Christmas tree: ");
    scanf("%d", &n);

    // Print the tree
    for (i = 1; i <= n; i++) {
        // Print spaces before the stars
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Print the trunk of the tree
    int trunkHeight = n / 2;
    for (i = 0; i < trunkHeight; i++) {
        for (space = 1; space <= n - 1; space++) {
            printf(" ");
        }
        printf("| |\n");
    }

    return 0;
}


// Here I have used for loop to print this pattern according to the users input .

// Thank You

