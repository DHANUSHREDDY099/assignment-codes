// write a program to show number in a pyramid form for example 
  // 1 
  // 2 3
  // 4 5 6....
  #include<stdio.h>
  int main()
  {
    int n, i,j,k=1;
    printf("last number of pyramid");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("\t %d",k);
            k++;
        }
        printf("\n");
    }
  }