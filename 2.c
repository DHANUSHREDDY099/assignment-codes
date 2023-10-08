#include<stdio.h>
int main(){
    int n,f,sum,l,num,d=1;
    printf("Enter a number");
    scanf("%d",&n);
    num=n;
    while(num!=0){
        num=num/10;
        d=d*10;
    }
    d=d/10;
    f=n/d;
    l=n%10;
    sum=f+l;
    printf("sum of first and last digit of %d is:%d",n,sum);
}