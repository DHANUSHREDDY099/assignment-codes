#include <stdio.h>
#include <math.h>

int main() {
    float r,v;
    printf("r is radius and v is volume of the sphere\n");
    printf("Enter the radius of the sphere: \n");
    scanf("%f",&r);
    v= (4.0 / 3.0) * M_PI* pow(r,3);
    printf("Volume of the sphere: %.2f cubic units\n",v);
}
-