//write a c program to print upper and lower case alphabets using ASCII values//
#include<stdio.h>
int main()
{
int i;
printf("capital letters upper case:\n");
for(i=65;i<=95;i++)
{
printf("%c",i);
}
printf("\nsmall letters lower case:\n");
for(i=97;i<=122;i++)
{
printf("%c",i);
}
return 0;
}

