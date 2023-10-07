// Q4. Write a program in C to find the HCF of two numbers.
//     (use for loop)

#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter the numbers:");
    scanf("%d%d", &n1, &n2);
    int min = (n1 < n2) ? n1 : n2;
    int hcf = 1;
    for (int i = 1; i <= min; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }
    printf(" HCF of %d and %d = %d\n", n1, n2, hcf);
    return 0;
}