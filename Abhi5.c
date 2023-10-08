// Enter an alphabet and find out whether it is a consonant or vowel//
#include<stdio.h>
int main() {
char c;
int lower, upper;
printf("Enter an alphabet: ");
scanf("%c", &c);

lower = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c=='u');
upper = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

if (lower || upper)
{
printf("%c is a vowel.", c);
} 
else
{

printf("%c is a consonant.", c);
} 
return 0;
}