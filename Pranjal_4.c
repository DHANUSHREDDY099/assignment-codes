// Pranjal Upadhyay
// Roll - 523EC0012
// Email - 523ec0012@iiitk.ac.in
// ECE (Dual Degree)
// IIITDM Kurnool


// Question 4 : Use switch case where you enter the date and the compiler will print the day of the week ?
// Use Switch case in C Language .


#include <stdio.h>

int getDayOfWeek(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }

    int K = year % 100;
    int J = year / 100;

    int dayOfWeek = (day + ((13 * (month + 1)) / 5) + K + (K / 4) + (J / 4) - (2 * J)) % 7;

    // Adjust for Sunday as 0 or Sunday as 1 (depends on your preference)
    // Sunday as 0:
    if (dayOfWeek == 0) {
        dayOfWeek = 6;
    } else {
        dayOfWeek--;
    }

    return dayOfWeek;
}

int main() {
    int day, month, year;

    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    int dayOfWeek = getDayOfWeek(day, month, year);

    switch (dayOfWeek) {
        case 0:
            printf("Sunday\n");
            break;
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}


// For the first part of the code I got the calculation of Date to Day of the week
// Then I got the input from the user of the date in "DD MM YYYY" format .

// Then I printed the day of the week to the user who inputed the date .

// Thank You

