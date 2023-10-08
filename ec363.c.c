// program to perform verious operation
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    printf("choose the operation\n");
    printf("1. any power of any number\n2. table of any inputed number\n3. factorial of any number:\n4. exit");
    scanf("%d",&d);
    if(d==1){
        printf("enter the a number: ");
        scanf("%d",&a);
        printf("enter the power:");
        scanf("%d",&b);
        c=pow(a,b);
        printf("%d to the power of %d = %d",a,b,c);
        }
    else if(d==2)
    {
        printf("enter the number whose table you want to print:");
        scanf("%d",&a);
        for(b=1;b<=10;b++)
        {
            printf("%d\n",a*b);
        }
    }
    else if(d==3)
    {
        printf("enter the number :");
        scanf("%d",&a);
        b=c=1;
        while(c<=a)
        {
            b=b*c;
            c++;
        }
        printf("factorial of %d is %d",a,b);
    }
    else if(d==4)
    {
        exit(0)
    }
    else{
        printf("enter valid choice");
    }
    return 0;
}
