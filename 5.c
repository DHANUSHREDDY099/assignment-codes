#include <stdio.h>

#include <math.h>

int main()

{

 float b;

 int a, n;

 printf("Enter a no.\n(1 to 255):");

 scanf("%d",&a);

 for (n=7;n>=0;n--)

 {

    b = pow(2,n);

     if (a>=b)

     {
   
      printf("1");

         a = a-b;

     }

     else
     {

         printf("0");

     }
     
 
 }
 return 0;

}