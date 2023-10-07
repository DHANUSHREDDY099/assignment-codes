#include<stdio.h>

// draw a pyramid like structure by using c program.
int main()
{
    int i, space, rows, j=0 ;
    printf("enter the no of rows");
    scanf("%d",&rows);
    for(i=1;i<=rows;++i,j=0)
    {
        for(space=1;space<=rows-i;++space )
     {   printf(" ");
    }
while(j!=2*i -1)
{
    printf("* ");
    ++j;
}
printf("\n");
}
return 0;
}