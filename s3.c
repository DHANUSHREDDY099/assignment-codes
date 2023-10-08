//to print an inverted full pyramid pattern
// n is the no.of rows


#include <stdio.h>
int main() {
   int n,i,j,space;
   printf("Enter the number of rows:");
   scanf("%d",&n);
   for(i=n;i>=1;--i)
   {
      for(space=0;space<n-i;++space)
         printf(" ");
      for (j=i;j<=2*i-1;++j)
         printf("*");
      for (j=0;j<i-1;++j)
         printf("*");
      printf("\n");
   }
   return 0;
}

