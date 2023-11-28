//Write a C program which are even and divisible by 5 up 
to n. 
#include<stdio.h>
int main(){
 int a , b;
 printf("enter your number\n");
 scanf("%d",&a);
 printf("even no dividble by 5 upto %d are\n", a);
 for ( int i=0; i<=a; i++){
 
 if( i%2==0 && i%5==0){
 
 printf("%d \n", i);
 }
 }
 return 0 ;
}
