
#include <stdio.h>
int main() 
{
  int a,b, maximum;


  printf("enter two integers\n");
  scanf("%d%d,&a,&b");


  if(a==b)
  {

    prrintf("both equal\n");

    return 0;
  }

  maximum =(a>b)?a:b;


  printf("%d is maximum\n", maximum);

  return 0;

}