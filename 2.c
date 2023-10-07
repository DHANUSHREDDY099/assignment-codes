// 123EC0001
//  2. A cashier has currency notes of denominations 10, 50 and
//     100. If the amount to be withdrawn is input through the
//     keyboard in hundreds, find the total number of currency notes
//     of each denomination the cashier will have to give to the
//     withdrawer.
#include <stdio.h>

int main()
{
  int amount, hundred_notes, fifty_notes, ten_notes;

  printf("Enter the amount to be withdrawn in hundreds: ");
  scanf("%d", &amount);

  hundred_notes = amount / 100;
  fifty_notes = (amount % 100) / 50;
  ten_notes = (amount % 50) / 10;

  printf("The cashier will have to give the following number of currency notes:\n");
  printf("Hundred notes: %d\n", hundred_notes);
  printf("Fifty notes: %d\n", fifty_notes);
  printf("Ten notes: %d\n", ten_notes);

  return 0;
}