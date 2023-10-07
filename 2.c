#include<stdio.h>
#include<conio.h>
int main()
{
    int h;
    printf("Enter the TIME ");
    scanf("%d",&h);
    
        if(h==0)
        {
            printf("12 Midnight\n");
        
        }

        else if(h>0 && h<12)
        {
            printf("%d AM\n",h);
        }


        else if(h==12)
        {
            printf("%d Noon\n",h);
        }


        else if(h<24 && h>=12)
        {
            
            printf("%d PM\n",h%12);
        }
        else{printf("You are not from this planet...\n");
        }
return 0;
}

