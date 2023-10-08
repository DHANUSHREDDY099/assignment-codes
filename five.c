//write c program to read 6 subject marks of ece students,find sum and check if sum>=110-'S' grade,if sum>=90-'A' grade,if sum>=80-'B' grade,if sum>=70-'C' grade,if sum>=60-'D' grade,if sum>=50-'E' garde,if sum<50-falied in exam,here sum=sum of marks of six subjects for 20 each//
#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5,m6,sum=0;
printf("enter the values:");
scanf("%d %d %d %d %d %d",&m1,&m2,&m3,&m4,&m5,&m6);
sum=m1+m2+m3+m4+m5+m6;
printf("sum=%d",sum);
if(sum>=110)
{ 
printf("you got 'S' grade");
}
else if(sum>=90)
{
printf("you got 'A' grade");
}
else if(sum>=80)
{
printf("you got 'B' grade");
}
else if(sum>70)
{
printf("you got 'C' grade");
}
else if(sum>=60)
{
printf("you got 'D' grade");
}
else if(sum>=50)
{
printf("you got 'E' grade");
}
else 
{ 
printf("you falied in exam");
}
return 0;
}


