#include<stdio.h>
int main( ){
    int n;
    printf("enter a positive integer:");
    scanf("%d",&n);
    if(n<=0){
        printf("invalid input.please enter a positive integer.\n");    
    }else{
        printf("multiplication table for %d:\n",n);
        for(int i=1; i<=10;++i){
            printf("%d x %d = %d\n",n,i,n*i);
        }
    }
}