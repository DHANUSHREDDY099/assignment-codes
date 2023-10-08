#include <stdio.h>
int main()
{
    int X;
    printf(“enter amount of water drank in ml:”);
    scanf(“%d”,&X);
    if (X>=2000)
    {
        printf(“Yes, you drank good about of water\n”);
    }
    else
    {
        printf(“No, You should drink more water\n”);
    }
    return 0;
}