//write a c program to reverse a 3 digit number//
#include<stdio.h>
int main() {
	int input, ans=0;
	printf("Print number\n");
	scanf("%d", &input);
	if(input==0) {
		printf("0\n");
		return 0;
	}
	while(input>0) {
		ans = ans*10 + input%10;
		input /= 10;
	}
	printf("%d\n", ans);
	return 0;
}