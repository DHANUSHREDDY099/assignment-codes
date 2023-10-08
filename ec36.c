// fees calculator with fine
// some assumption 30 days in a month
//365 days in a year
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f,g,h,j,k,l;
    float A,B,C;
    int total_day;
    printf("enter the ammount of fees :rs");
    scanf("%f",&A);
    printf("Enter fine to be added per day:rs");
    scanf("%f",&B);
    printf("Enter last year month date  of submission:");
    scanf("%d %d %d", &a,&b,&c);
    printf("Enter current year month date :");
    scanf("%d %d %d",&e,&f,&g);
    total_day=fabs((e-a)*365) + fabs((f-b)*30) + fabs(g-c);
    if (total_day<=0)
    {
        printf("No fine applied total fess =%f",A);
    }
    else{
        C=A+(B*total_day);
        printf("Total fees with fine=%f\n",C);
        printf("total fine =%f\n",(B*total_day));
        printf("total days =%d\n",total_day);
    }
    
}