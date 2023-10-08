#include<stdio.h>
int main(){
    int amount,hundreds,fifties,tens;
    printf("Enter the amount to be withdrawn");
    scanf("%d",&amount);
    hundreds=amount/100;
    amount=amount%100;
    fifties=amount/50;
    amount=amount%50;
    tens=amount/10;
    printf("Cashier needs to give:\n");
    printf("100s: %d notes\n",hundreds);
    printf("50s: %d notes\n",fifties);
    printf("10s: %d notes\n",tens);
}
