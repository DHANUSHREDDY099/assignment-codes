#include <stdio.h>
int main()
{
	char alphabet;
	alphabet='a';
	printf("Lowercase alphabets:\n");
	while(alphabet<='z')
	{
		printf("%c ",alphabet);
		alphabet++;
	}
        return 0;
}