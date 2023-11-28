/*Write a program in C to display the multiplier table 
vertically from 1 to n.
Input upto the table number starting from 1 : 8
Expected Output :
Multiplication table from 1 to 8
1x1 = 1, 2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 
8x1 = 8*/
#include<stdio.h>
int main(){
 int a, b ;
 printf("enter your no upto which you want your table\n");
 scanf("%d",&a);
 for (int i=1;i <= a ; i++)
 {
 for(int j =1; j <=10; j++){
 printf("%d * %d = %d\n", i ,j , i*j);
 
 }
 printf("\n");
 }
 return 0;
}
