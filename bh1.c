1) The distance between two cities (in km.) is input through thekeyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters 

#include<stdio.h>
int main() {
    
    double distanceInKm;

    // Input distance in kilometers from the user
    printf("Enter the distance between two cities (in kilometers): ");
    scanf("%lf", &distanceInKm);


    double meters = distanceInKm ;
    double feet = distanceInKm  ; 
    double inches = distanceInKm ; 
    double centimeters = distanceInKm  ; 

    
    printf("Distance in meters: %.2f m\n", meters);
    printf("Distance in feet: %.2f ft\n", feet);
    printf("Distance in inches: %.2f inches\n", inches);
    printf("Distance in centimeters: %.2f cm\n", centimeters);

    return 0;
}