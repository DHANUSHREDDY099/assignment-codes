#include<stdio.h>

int main()

{

    int a, i, j, n=1;

    printf("enter no:");

    scanf("%d",&a);

    for (i=1;i<=a;i++)

    {

    
    for(j=1;j<=i;j++)

        {
 
            printf("%d ",n);

            n++;

    }

    printf("\n");

   }

   return 0;
 
}