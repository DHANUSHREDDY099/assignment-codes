/* Write a C Program to print the hollow diamond pattern using stars*/
#include <stdio.h> 
int main() 
{ 
    int n,i,j,k ; 
  printf("Enter no.of rows");
  scanf("%d",&n); 
    for ( i = 0; i < 2 * n - 1; i++)
	 { 
        /* assigning values to the comparator according to 
         the row number */
        int comp; 
        if (i < n) { 
            comp = 2 * (n - i) - 1; 
        } 
        else { 
            comp = 2 * (i - n + 1) + 1; 
        } 
  
        /*first inner loop to print leading whitespaces */
        for ( j = 0; j < comp; j++) { 
            printf(" "); 
        } 
  
        /*second inner loop to print star * and inner 
         whitespaces*/ 
        for ( k = 0; k < 2 * n - comp; k++) { 
            if (k == 0 || k == 2 * n - comp - 1) { 
                printf("* "); 
            } 
            else { 
                printf("  "); 
            } 
        } 
        printf("\n"); 
    } 
     
}
