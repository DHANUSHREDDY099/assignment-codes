//Write a program in C to display the n terms of a harmonic series and their sum.
//The series is : 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms


#include <stdio.h>
void main()
{
   int i,n;
   float s=0.0;
   printf("Input the number of terms : ");
   scanf("%d",&n);
   printf("\n\n");
   for(i=1;i<=n;i++)
   {
       if(i<n)
       {
     printf("1/%d + ",i);
     s+=1/(float)i;
       }
     if(i==n)
     {
     printf("1/%d ",i);
     s+=1/(float)i;
     }
     }
        printf("\nSum of Series upto %d terms : %f \n",n,s);
}