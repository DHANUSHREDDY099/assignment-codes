3.If the ages of Ram, Shyam and Ajay are input through the 
keyboard, write a program to determine the youngest of the 
three.

#include <stdio.h>

int main() {
    int ramAge, shyamAge, ajayAge;

    printf("Enter the age of Ram: ");
    scanf("%d", &ramAge);

    printf("Enter the age of Shyam: ");
    scanf("%d", &shyamAge);

    printf("Enter the age of Ajay: ");
    scanf("%d", &ajayAge);

    if (ramAge < shyamAge && ramAge < ajayAge) {
        printf("Ram is the youngest with age %d\n", ramAge);
    } else if (shyamAge < ramAge && shyamAge < ajayAge) {
        printf("Shyam is the youngest with age %d\n", shyamAge);
    } else {
        printf("Ajay is the youngest with age %d\n", ajayAge);
    }

    return 0;
}
