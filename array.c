/*Q4)In a Colony of 30 people living survey the number of babies of age between(0-4)
years of age,number of school age kids(4-17) and Adult population USing WHile
loop and Arrays.Then seek if playschool,school and development project required
or not on the basis of population of different groups Using if statement*/
#include <stdio.h>
int main()
{
	int age,a=0,b=0,c=0,i=0;
	while(i<30)
	{
		printf("Enter age of person [%d]: ",i+1);
		scanf("%d",&age);
		
		if(age>=0 && age<=4)
			a++;
		else if(age>=5 && age<=17)
			b++;
		else
			c++;
		
		i++;
	}
	
	printf("Number of Baby: %d\n",a);
	printf("number of School age kids: %d\n",b);
	printf("number of adult: %d\n",c);
	if(a>5)
	    printf("playschool is required in the colony\n");
	    else printf("playschool not rerquired\n");
	    if(b>5)
	    printf("School is required\n");
	    else printf("playschool not require\n");
	    if(c>15) printf("higher development project required\n");
	    else printf("basic amenties required\n");
	    
	    

	return 0;
}