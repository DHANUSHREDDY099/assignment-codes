#include<stdio.h>
int main()
{
  int a,b,i,n,c;
  printf("Enter a value ");
  scanf("%d",&a);
  printf("Enter b value ");
  scanf("%d",&b);
  for(i=0;i<=10;i++)
  {
       n=(a*i+b)/10;
       printf("%d=(%d*%d+%d)/10\n",n,a,i,b);
  }
  for(i=0;i<=5;i++)
  {
       c=++n*i;
       printf("%d\n",c);
  }
  printf("%c",++c);
  return 0;
}
    
;
}
    
