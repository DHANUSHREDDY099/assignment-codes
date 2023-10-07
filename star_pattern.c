/*print a right angled isosceles tiangle which is made of * symbols where the number of lines 
of the pattern are user input*/
#include <stdio.h>
int main()
{
    int n;
    printf("how many lines do you want?\n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}