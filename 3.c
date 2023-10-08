#include <stdio.h>
int main()
{
    int X;
    printf ("Enter Your Attendance:");
    scanf ("%d",&X);
    if (X<=75)
    {
    printf ("You attendance is poor \n");
    }
    
    else if(X>75&&X<=85)
    {
        printf ("Your should Improve your attendance\n");
    }
    else
    {
        printf ("Your Attendance is good\n");
        
    }
    return 0;
}