// Pranjal Upadhyay
// Roll - 523EC0012
// Email - 523ec0012@iiitk.ac.in
// ECE (Dual Degree)
// IIITDM Kurnool


// Question : 3 - Print the converted binary number after getting decimal 
// number input from the user ?


#include <stdio.h>

int main() {
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    if (decimalNumber < 0) {
        printf("Negative numbers are not supported.\n");
        return 1;
    }

    int binary[64]; // Assuming a 64-bit binary representation
    int index = 0;

    if (decimalNumber == 0) {
        binary[index++] = 0;
    } else {
        while (decimalNumber > 0) {
            binary[index] = decimalNumber % 2;
            decimalNumber /= 2;
            index++;
        }
    }

    printf("Binary representation: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}


// Note : First I have taken the input of decimal number from the user 
// Then I have stated that negative numbers are not supported

// Then I used if else and while loops for the conversion 

// Then I wrote the code for binary conversion in the 2nd part 

// Thank You

