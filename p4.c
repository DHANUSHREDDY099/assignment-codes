/*Write a c program for revnum */ 
#include <stdio.h>

int main(){

    int Num, revnum = 0, remainder;

    printf("Enter the number to reverse: ");

    scanf("%d", &Num);    

    while (Num != 0){

        remainder = Num % 10;

        revnum = revnum * 10 + remainder;

        Num = Num/10;

    }    

    printf("The reversed number is: %d", revnum);



}


