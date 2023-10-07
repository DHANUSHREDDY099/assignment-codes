#include <stdio.h>

void printPascalsTriangle(int n) {
    int triangle[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            triangle[i][j] = 0;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf("  "); 
        }
        for (int j = 0; j <= i; j++) {
            printf("%d   ", triangle[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int numRows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &numRows);

    if (numRows <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Pascal's Triangle with %d rows:\n", numRows);
    printPascalsTriangle(numRows);

    return 0;
}

