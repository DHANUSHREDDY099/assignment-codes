// WRITE A TEMPERATURE CODE TO CONVERT CELCIUS , FARENHEIT AND KELVIN INTO REQUIRED SCALE.
#include<stdio.h>
int main() {
    int a, b, c, f, k;
    
    printf("Enter a=0 for Celsius to Fahrenheit conversion, 1 for Fahrenheit to Celsius conversion, or 2 for Celsius to Kelvin conversion: \n");
    scanf("%d", &a);
    
    printf("Enter the temperature value: \n");
    scanf("%d", &b);
    
    if (a == 0) {
        c = (5.0 / 9.0) * (b - 32);
        printf("Temperature in Fahrenheit: %d\n", c);
    } 
    else if (a == 1) {
        f = (5.0 / 9.0) * (b - 32);
        printf("Temperature in Celsius: %d\n", f);
    } 
    else if (a == 2) {
        k = b - 273;
        printf("Temperature in Kelvin: %d\n", k);
    } 
    else {
        printf("Invalid input for 'a'. Please enter 0, 1, or 2.\n");
    }
    
    return 0;
}
