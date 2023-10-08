// question:write a program to convert temperature to required units
#include <stdio.h>

int main() {
    int choice;
    double temperature, convertedTemperature;

    printf("Temperature Conversion Menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Fahrenheit to Kelvin\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    printf("Enter the temperature: ");
    scanf("%lf", &temperature);

    switch (choice) {
        case 1:
            convertedTemperature = (temperature * 9 / 5) + 32;
            printf("Temperature in Fahrenheit: %.2lf\n", convertedTemperature);
            break;
        case 2:
            convertedTemperature = (temperature - 32) * 5 / 9;
            printf("Temperature in Celsius: %.2lf\n", convertedTemperature);
            break;
        case 3:
            convertedTemperature = temperature + 273.15;
            printf("Temperature in Kelvin: %.2lf\n", convertedTemperature);
            break;
        case 4:
            convertedTemperature = temperature - 273.15;
            printf("Temperature in Celsius: %.2lf\n", convertedTemperature);
            break;
        case 5:
            convertedTemperature = (temperature - 32) * 5 / 9 + 273.15;
            printf("Temperature in Kelvin: %.2lf\n", convertedTemperature);
            break;
        case 6:
            convertedTemperature = (temperature - 273.15) * 9 / 5 + 32;
            printf("Temperature in Fahrenheit: %.2lf\n", convertedTemperature);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
