#include<stdio.h>
int main( )
{ int n,i;
    printf("enter a positive integer:");
    scanf("%d",&n);

    if(n<=0){
        printf("invalid input.please enter a positive integer.\n");
    }else{
        printf("multiplication table for %d:\n",n);

        int i=1;
        while(i<=10){
            printf("%d x %d=%d\n",n,i,n*i);
            i++;
        }
    }   
}     