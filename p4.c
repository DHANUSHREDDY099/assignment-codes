// print star pattern as equilateral triangle
#include<stdio.h>
int main(){
    int i;
    int j;
    int k;
    int n;
    printf("enter rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            printf(" ");

        }
        for(k=1;k<=i;k++){
            printf(" *");
        }
        printf("\n");


    }
    return 0;
}