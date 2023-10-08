4.Write a program to calculate overtime pay of 10 employees.Overtime is paid at the rate of Rs. 12per hour for every
hour worked above 40 hours. Assume that employees do notwork for fractional part of an hour.

#include <stdio.h>

int main() {
    int hoursWorked, i;
    float overtimePay, totalOvertimePay = 0;

    for (i = 1; i <= 10; i++) {
        printf("Enter hours worked by employee %d: ", i);
        scanf("%d", &hoursWorked);

        if (hoursWorked > 40) {
            overtimePay = (hoursWorked - 40) * 12;
            printf("Overtime pay for employee %d is Rs. %.2f\n", i, overtimePay);
        } else {
            printf("No overtime pay for employee %d\n", i);
        }

        totalOvertimePay += overtimePay;
        overtimePay = 0;
    }

    printf("Total overtime pay for all employees is Rs.12 %.2f\n", totalOvertimePay);

    return 0;
}