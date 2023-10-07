// wrire a programme to assign result and grades of a student scored in maths,physics,chemistry exams
// for result- 'pass' (each subject marks are more than 35) or else 'fail'
// grade S-average marks more than 80
//grade  A-average marks more than 60
// grade B-average marks more than 40
//grade C- average marks less than 40 and ****-for fail


#include<stdio.h>
int main()
{
    int m,p,c,total,avg;
   printf("enter maths marks");
    scanf("%d",&m); 
   printf("enter physics marks");
    scanf("%d",&p); 
    printf("enter chemistry marks");
    scanf("%d",&c); 
    total=m+p+c;
    avg=tot/3;
    printf("total score=%d",total);
    if(m>35&&p>35&&c>35)
    {
        printf("result=pass");
       if(avg<40)
        printf("C grade");
        else if(avg<60)
        printf("B grade");
        else if(avg<80)
        printf("A grade");
        else
        printf("S grade");
    }
    else
    printf("result=fail");
    printf("***");

}