// given number is perfect or not
#include <stdio.h>
int main()
{
    int num,sum=0,divisor;
    printf("enter a number");
    scanf("%d \n %d",&num,&divisor);
    while(divisor<=num)
    {
        if (num % divisor == 0)
{
    sum+= divisor;
}

    }
    if (sum == num){
        printf("given is a perfect number%d \n",num);
     }
else{
    printf("given number is not perfect number %d\n",num);
}
        return 0 ;

    }
