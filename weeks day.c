#include<stdio.h>
int main()
{
    int date;
    printf("give me date:");
    scanf("%d",&date);
    if(date>31)
    {
        printf("wrong date");
    }

   else if(date%7==0)
    {
        printf("sunday");
    }
 else if(date% 7==1)  
 {
    printf("monday");
 } 
 else if(date% 7==2)
 {
    printf("tuesday");
 }
        else if(date%7==3)
        {
            printf("wednesday");
        }
        else if (date%7==4)
        {
            printf("thursday");
        }
        else if(date%7==5)
        {
            printf("friday");
        }
        else if(date%7==6)
        {
            printf("saturday");
        }
        return 0;
}