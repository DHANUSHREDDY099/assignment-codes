// Sohan Maity
// Roll - 523EC0001
// Email - 523ec0001@iiitk.ac.in
// ECE (Dual Degree)
// IIITDM Kurnool


// Question 2 : Print Floyd's triangle getting 
//              input of number of rows from the user ?



#include <stdio.h>

int main() {
    int n, num = 1;

    printf("Enter the number of rows for Floyd's triangle: ");
    scanf("%d", &n);

    printf("Floyd's Triangle with %d rows:\n", n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}


// Here I have used for loop to print the Floyd's triangle after getting the input
//  of the number of rows from the user .

// Thank You