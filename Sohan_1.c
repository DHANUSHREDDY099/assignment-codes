// Sohan Maity
// Roll - 523EC0001
// Email - 523ec0001@iiitk.ac.in
// ECE (Dual Degree)
// IIITDM Kurnool

// Question 1 : Convert Temperatures in Degree Celsius to Fahrenheit or Vice Versa using C Programming .

#include <stdio.h>

int main() {
    int choice;
    double temperature, converted_Temperature;

// Get the input from the user about the conversion choice

    printf("Choose an option:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    scanf("%d", &choice);

// Choice 1 


    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &temperature);
        converted_Temperature = (temperature * 9/5) + 32;
        printf("Temperature in Fahrenheit: %.2lf\n", converted_Temperature);

// Choice 2 

    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &temperature);
        converted_Temperature = (temperature - 32) * 5/9;
        printf("Temperature in Celsius: %.2lf\n", converted_Temperature);

// Invalid Input Statement 

    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}

// Here I have used if else if else loop to print the converted temperature 
// according to the users input .

// Thank You