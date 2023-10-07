//write a program to check whether entered alphabet is vowel or consonant
#include<stdio.h>
int main()
char ch,a,e,i,o,u;
printf("enter alphabet");
scanf("%c",&ch);
switch(ch)
{
   case 'a':
    printf(" it is vowel");
    break; 
    case 'e':
    printf(" it is vowel");
    break;
    case 'i':
    printf(" it is vowel");
    break;
    case 'o':
    printf(" it is vowel");
    break;
    case 'u':
    printf(" it is vowel");
    break;
    default:
    printf("not a vowel");
    break;

}