


5.Given the length and breadth of a rectangle, write a program tofind whether the area of the rectangle is greater than its perimeter


#include <stdio.h>

int main() {
    
    float length, breadth, area, perimeter;

    
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

   
    area = length * breadth;
    perimeter = 2 * (length + breadth);

 
    if (area > perimeter)
Given the length and breadth of a rectangle, write a program to
find whether the area of the rectangle is greater than its
perimeter.Given the length and breadth of a rectangle, write a program to
find whether the area of the rectangle is greater than its
perimeter. {
        printf("The area of the rectangle (%.2f) is greater than its perimeter (%.2f)\n", area, perimeter);
    } else {
        printf("The area of the rectangle (%.2f) is not greater than its perimeter (%.2f)\n", area, perimeter);
    }

    return 0;
}