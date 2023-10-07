 
#include <stdio.h> 
//void printPascal(int n) 
int main()
{ 
    int line,space,i,n;
    printf("give a value of n for length of triangle");
    scanf("%d",&n);
	for ( line = 1; line <= n; line++)
     { 
		for ( space = 1; space <= n - line; space++) 
			printf(" "); 
	 
		int coef = 1; 
		for ( i = 1; i <= line; i++) 
        { 
			printf("%4d", coef); 
			coef = coef * (line - i) / i; 
		} 
		printf("\n"); 
	} 

	return 0; 
}
