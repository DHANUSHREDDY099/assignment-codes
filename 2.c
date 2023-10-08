#include <stdio.h>
int main()
{
    int X;
    printf ("Enter Your Age:");
    scanf ("%d",&X);
    if (X<=15)
    {
        printf ("You are a kid\n");
    }
    else if (X>15&&X<=18)
    {    printf ("You are in Adolescence\n");
    }
    else if (X>18&&X<=21)
    {
        printf ("You are a Teenager\n");
        
    }
    else
    {
        printf ("You are an Adult\n");
        
    }
    return 0;
    
}
