/*Write a program in C to display the cube of the number 
up to an integer. Example:
Input number of terms : 5
Expected Output :
Number is : 1 and cube of the 1 is :1
Number is : 2 and cube of the 2 is :8
Number is : 3 and cube of the 3 is :27
Number is : 4 and cube of the 4 is :64
Number is : 5 and cube of the 5 is :125
*/
#include<stdio.h>
#include<math.h>
int main(){
 int a, b;
 printf("enter upto what no. you want to print \n");
 scanf("%d",&a);
 for (int i =1 ; i<= a; i++){
 int x= pow(i,3);
 printf( "the cube of %d is %d \n" , i,x);
 }
 return 0;
 }
