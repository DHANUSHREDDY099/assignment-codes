// enter ur name and display it in the form of 3×6//
#include<stdio.h>
int main()
{
int i,j;
char name[30];
printf("enter ur name:");
scanf("%s",&name);
i=1;
while(i<=3)
{
        j=1;
    while(j<=6)
    printf("%s ",name);
    j++;
}  
printf("\n");
i++;
return 0;
}