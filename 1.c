#include <stdio.h>
int main() 
{
int choice;
float num1, num2, result;

printf("Welcome to the Calculator Program!\n");
printf("choose your operation:\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("Enter your choice (1-4): ");
scanf("%d", &choice);

printf("Enter two numbers: ");
scanf("%f %f", &num1, &num2);

switch (choice)
{
case 1:
result = num1 + num2;
printf("The sum of %.2f and %.2f is %.2f\n", num1, num2, result);
break;

case 2:
result = num1 - num2;
printf("The difference between %.2f and %.2f is %.2f\n", num1, num2, result);
break;

case 3:
result = num1 * num2;
printf("The product of %.2f and %.2f is %.2f\n", num1, num2, result);
break;

case 4:
if (num2 != 0) 
{
result = num1 / num2;
printf("The division of %.2f by %.2f is %.2f\n", num1, num2, result);
}
else
{
printf("Error: Division by zero is not allowed!\n");
}
break;
default:
printf("Invalid choice! Please select a number between 1 and 4.\n");
break;
}

return 0;
}


