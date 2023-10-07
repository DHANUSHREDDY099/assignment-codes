#include<stdio.h>

int main()

{
    int n;

    char x[20];

    printf("Enter your name :\n");

    scanf("%[^\n]*c",x);

    printf("ENTER code\n(hint:6969)\n");
 
    scanf("%d",&n);

if (n == 6969)
{
    printf("Hello!, %s \n",x);
    printf("Have a good day");
}

else

{
    printf("ACCESS DENIED");
}
  return 0;
  
}