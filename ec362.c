// to print all odd and even number btween two inputed number
#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter the starting number: ");
    scanf("%d", &a);
    printf("Enter the ending number: ");
    scanf("%d", &b);
    printf("Even numbers between %d and %d are:\n", a,b);
    if (a % 2 != 0) {
        a++;
    }
    for (int c = a; c <= b; c += 2) {
        printf("%d ", c);
    }
    printf("\n");
    printf("odd numbers between %d and %d are:\n", a,b);
    if(a % 2 == 0)
    {
        a++;
    }
    for (int c = a; c <= b; c += 2) {
        printf("%d ", c);
    }
    printf("\n");
    return 0;
}