/*to print the pattern 
1
AB
123
ABCD ..*/

#include<stdio.h>
int main() {
int i,j,n;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++) {
    for(j=1;j<=i;j++) {
        if(i%2==0) {
            printf("%c ",j+64);
        } else {
            printf("%d ",j);
        }
    }
    printf("\n");
}
}