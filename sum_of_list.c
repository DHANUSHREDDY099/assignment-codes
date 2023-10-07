/*take numbers as input and print the sum where both the number if numbers and the
numbers are input*/
#include <stdio.h>
int main()
{
    int n;
    printf("how many numbers do you what to add?\n");
    scanf("%d",&n);
    int list[n];
    for(int i = 0; i <= n - 1; i++)
    {
        printf("enter number %d :", i + 1);
        scanf("%d", &list[i]);
    }
    int sum = list[0];
    for(int i = 1; i <= n - 1; i++)
    {
        sum += list[i];
    }
    printf("the sum is %d", sum);
    return 0;
}