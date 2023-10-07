//write a programme to print the fibonacci sequence
#include<stdio.h>
int main(){
    int i,n;

    //initialize first and second terms
    int t1=3,t2=6;

    //initialize next term
    int nextterm = t1+t2;

    printf("enter number of terms");
    scanf("%d",&n);
    printf("fibonacci sequence: %d, %d",t1,t2);

    //print 7th to n terms
    for(i=7;i<=n;++i){
        printf("%d",nextterm);
        t1=t2;
        t2=nextterm;
    }
    return 0;
    }


