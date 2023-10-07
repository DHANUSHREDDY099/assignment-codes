// write a program to find the sum of the G.P. series
#include <stdio.h>
int main()
{
    float g1,cr,i,n,j;
    float ntrm,gpn;
    float sum =0;
    printf("\n\n find the sum of gp series :\n");
    printf("enter the first number of the G.P. series");
    scanf("%f",&g1);
    printf("enter the number of terms in the G.P series: ");
    scanf("%f",&ntrm);
    printf("enter the common ratio of G.P. series: ");
    scanf("%f",&cr);
    /* generate the G.P SERIES*/
    printf("\n the numbers for the G.P. series :\n");
    printf("%f",g1);
    for(j=1;j<ntrm;j++)
    {
        gpn=g1*pow(cr,j);
        sum=sum+gpn;
        printf("%f ",gpn);
    }
    printf("The sum of the G.P. series : %f\n\n", sum);
    }
