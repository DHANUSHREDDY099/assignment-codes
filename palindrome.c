/*Q3)In Permutation and Combination (PNC) we have studied a Palindrome is a number that reads the same forward
and backward. for example 1331 is a palindrome.Calculate a C program using do while and if loop 
for identifying a number is palindrom or not.*/
#include <stdio.h>
int main(){
    int a,b,c,d=0;
    printf("enter the number\n");
    scanf("%d",&a);
    b=a;
    do{
        c=a%10;
        d=(d*10)+c;
        a=a/10;
    }while(a>0);
    if(b==d)
    printf("the given number is palindrom");
    else printf("The given number is not a palindrom");
    return 0;
}