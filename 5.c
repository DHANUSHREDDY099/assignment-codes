//find the LCM numbers //
#include <stdio.h>

int main() {

    int n1, n2, n;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    
    n = (n1 > n2) ? n1 : n2;

    while (1)
     {
        if ((n % n1 == 0) && (n % n2 == 0))
         {
            printf("The LCM of %d and %d is %d.", n1, n2, n);
            break;
         }
        ++n;
    }
    return 0;
}