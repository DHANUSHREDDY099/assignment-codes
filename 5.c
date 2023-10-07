// 123EC0001
//  5. Write a program to obtain transpose of a 4 x 4 matrix. The
//     transpose of a matrix is obtained by exchanging the elements
//     of each row with the elements of the corresponding column.

#include <stdio.h>

int main()
{
  int matrix[4][4], transpose[4][4];
  int i, j;

  printf("Enter the elements of the 4 x 4 matrix:\n");
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }

  // Find the transpose of the matrix.
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      transpose[j][i] = matrix[i][j];
    }
  }

  // Print the transpose of the matrix.
  printf("The transpose of the matrix is:\n");
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf("%d ", transpose[i][j]);
    }
    printf("\n");
  }

  return 0;
}