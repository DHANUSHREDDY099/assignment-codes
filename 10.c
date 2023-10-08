/* take value of x and y and store them in x and y  and then intercahnge the value the value of x and y */
#include <stdio.h>
void main()
{
    int x, y, c;
    printf("enter the value of x\n");
    printf("enter the value of y\n");
    scanf("%d%d", &x, &y);
    c = y;

    y = x;
    x = c;

    printf(" the value of x : %d\n", x);
    printf(" the value of y : %d\n", y);
}
