#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    while(marks != -1) {
        if(marks >= 90)
            printf("A grade\n");
        else if(marks >= 80)
            printf("B grade\n");
        else
            printf("C grade\n");

        printf("Enter your marks: ");
        scanf("%d", &marks);
    }

    return 0;
}
