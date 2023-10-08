print the day of the week using a switch case

// C program to print the day using switch
#include <stdio.h>
 
// Driver Code

int main()
{

    int day = 2;
 

    printf("The day with number %d is ", day);

    switch (day) {

      case 1:

          printf("Monday");

          break;

      case 2:

          printf("Tuesday");

          break;

      case 3:

          printf("Wednesday");

          break;

      case 4:

          printf("Thursday");

          break;

      case 5:

          printf("Thursday");

          break;

      case 6:

          printf("Thursday");

          break;

      case 7:

          printf("Thursday");

          break;

      default:

          printf("Invalid Input");

          break;

      }

    return 0;
}