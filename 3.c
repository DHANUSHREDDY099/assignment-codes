// WRITE A CODE TO DISPLAY THE SUDENTS INTO 3 CATOGARIES ON THE BASIS OF ATTANDANCE
#include <stdio.h>
int main() {
    int n,a,i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
	for(i = 1; i <= n; i++) {
        printf("Enter attendance percentage for student %d: ", i);
        scanf("%d", &a);

        if (a >= 90.0) {
            printf("Student %d: Excellent\n", i);
        } else if (a >= 80.0) {
            printf("Student %d: Good\n", i);
        } else if (a >= 70.0) {
            printf("Student %d: Average\n", i);
        } else {
            printf("Student %d: Poor\n", i);
        }
    }

    return 0;
}
