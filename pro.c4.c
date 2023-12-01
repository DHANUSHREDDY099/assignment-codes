4.If the marks obtained by a student in five different subjects 
are input through the keyboard, find out the aggregate marks 
and percentage marks obtained by the student. Assume that 
the maximum marks that can be obtained by a student in each 
subject is 100.


#include <stdio.h>

int main() {
    int subject1, subject2, subject3, subject4, subject5;

    printf("Enter marks obtained in Subject 1 (out of 100): ");
    scanf("%d", &subject1);

    printf("Enter marks obtained in Subject 2 (out of 100): ");
    scanf("%d", &subject2);

    printf("Enter marks obtained in Subject 3 (out of 100): ");
    scanf("%d", &subject3);

    printf("Enter marks obtained in Subject 4 (out of 100): ");
    scanf("%d", &subject4);

    printf("Enter marks obtained in Subject 5 (out of 100): ");
    scanf("%d", &subject5);
    int totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;
    float percentage = (float)totalMarks / 500 * 100; 
    printf("Aggregate Marks: %d\n", totalMarks);
    printf("Percentage Marks: %.2f%%\n", percentage);

    return 0;
}
