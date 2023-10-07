// 123EC0001
//  1. If a five-digit number is input through the keyboard, write a
//     program to calculate the sum of its digits.Use the modulus operator ‘%’
#include <stdio.h>

int main()
{
  int num, sum = 0;

  printf("Enter a five-digit number: ");
  scanf("%d", &num);

  while (num > 0)
  {
    sum += num % 10;
    num /= 10;
  }

  printf("The sum of the digits is: %d\n", sum);

  return 0;
}