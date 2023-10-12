#include <stdio.h>
int main()
{
	int number;
	
	int n;
        number=1;
        printf("Enter the value of N: ");
	scanf("%d",&n);
        printf("Odd Numbers from 1 to %d:\n",n);
        while(number<=n)
	{
		if(number%2 != 0)
			printf("%d ",number);
		number++;
	}
        return 0;
}