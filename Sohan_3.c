// Sohan Maity
// Roll - 523EC0001
// Email - 523ec0001@iiitk.ac.in
// ECE (Dual Degree)
// IIITDM Kurnool


// Question 3 : Form a Calculator Using Switch Case 
//              using C Programming ?


#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2, result;
    int choice;

    printf("Simple Calculator Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("Enter your choice (1/2/3/4/5): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %lf\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %lf\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %lf\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %lf\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        case 5:
            result = pow(num1, num2);
            printf("Result: %lf\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}


// Here I have used switch case , the user needs to input the details 
// and then the calC will solve and print the answers .

// Thank You