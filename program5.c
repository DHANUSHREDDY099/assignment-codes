// Write a C program to find the sum of elements in an 
array.
#include <stdio.h>
int main() {
 int arr[5];
 printf("enter array elements\n");
 
 for (int j =0 ; j <5; j++){
 scanf("%d", &arr[j]);
 }
 int sum = 0;
 for (int i = 0; i < 5; i++) {
 sum = sum +arr[i];
 }
 printf("Sum of elements in the array: %d\n", sum);
 return 0;
}