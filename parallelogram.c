#include <stdio.h>
int main() 
{   printf("b=base,h=height,a=area\n");
    float b,h,a;
    printf("Enter the base of the parallelogram: \n");
    scanf("%f",&b);
    printf("Enter the height of the parallelogram: \n");
    scanf("%f",&h);
    a = b*h;
    printf("Area of the parallelogram: %.2f\n", a);
}    