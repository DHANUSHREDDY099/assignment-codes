//output:  
           *
          * *
         * * *
        * * * *
       * * * * *
      * * * * * *
     * * * * * * *
    * * * * * * * *//
#include<stdio.h>
int main()
{
int i,j,s,rows,k;
printf("enter no.of rows : ");
scanf("%d",&rows);
s=rows+4-1;
for(i=1;i {
for(k=s;k>=1;k--)
{
printf(" ");
}

	 for(j=1;j	 printf("* ");
	printf("\n");
s--;
}
}