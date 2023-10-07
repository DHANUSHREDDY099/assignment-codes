/*take numbers from users and print the largst number wher both the number of numbers
and the numbers are input of the user*/
#include <stdio.h>
int main() 
{
    int n;
    printf("How many numbers do you want to compare?\n");
    scanf("%d",&n);
    int numbers[n];
    for (int i = 0; i < n; i++) 
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    int largest = numbers[0];
    for (int i = 1; i < n; i++) 
    {
        if (numbers[i] > largest) 
        {
            largest = numbers[i];
        }
    }
    printf("The largest number is: %d\n", largest);

    return 0;
}
