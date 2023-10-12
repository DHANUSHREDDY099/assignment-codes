// while programs
// guessing game
#include<stdio.h>
int main () 
{
int secretnumber =143;
int guess;
while (guess != secretnumber)
{
printf("enter a number:");
scanf("%d", & guess);
}
printf("you win");
}