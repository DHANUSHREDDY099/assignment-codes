// write a programme to swap two variables
#include<stdio.h>
int main(){
    int x,y;
    printf("enter x");
    scanf("%d",&x);
    printf("enter y");
    scanf("%d",&y);

    //using a temporary value to store variable
    int temp=x;
    x=y;
    y=temp;
    printf("After swapping: x=%d , y=%d",x,y);
    return 0;
}