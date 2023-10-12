// Pranjal Upadhyay
// Roll - 523EC0012
// Email - 523ec0012@iiitk.ac.in
// ECE (Dual Degree)
// IIITDM Kurnool


// Question 5 : Print a triangular number pattern starting from 1 in the middle and accordingly printing
// after getting the input of number of rows from the user for printing simultaneous numbers getting a
// perfect triangle of numbers ?

#include<stdio.h>
int main(){
    int k=1;
    int no=1;
    int i,j;
    int rows;

    printf("enter no of rows: ");
    scanf("%d",&rows);

    for (i=1 ;i<=rows;i++){
        for( j=1; j<=(2*rows-1) ; j++){
            if (j>=(rows +1)-i && j<=(rows -1)+i && k==1){
                printf("%d",no);
                no++;
                k=0;
            }else{
                printf(" ");
                k=1;
            }   
        }
        printf("\n");
    }

    return 0;
}

// In this code , First I assigned the values of the variables
// Then I got the input of no of rows from the user

// then I used For If Else loop to print the triangle with numbers 

// Thank you