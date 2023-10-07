//write a programme to allot seat according to mains percentile using switch case
#include<stdio.h>
int main(){
    int number;
    printf("enter number(1-3):");
    scanf("%d", &number);
    switch(number){
    //if percentile is between 96-98
    case1: printf("seat is alloted in cse");
           break;
    //if percentile is between 93-96
    case2: printf("seat is alloted in ece");
           break;
    //if percentile is between 90-93
    case3: printf("seat is alloted in mechanical");
           break;
    }
     return 0;
}






