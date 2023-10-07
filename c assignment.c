//1) addition of two numbers
#include<stdio.h>
int main()
double a, b , result =0 ;
printf("Enter first number : ");
scanf ("%1f", &a);
printf ("Enter Second Number : "); scanf ("%]f",8b);
result = a + b;
printf ("Addition of two numbers is : %lf", result);
return 8;
//2)Write a program in C to display the first 10 natural numbers.
#include <stdio.h>
void main()
{     
    int i;
	printf("The first 10 natural numbers are:\n");
	for (i=1;i<=10;i++)
	{      
		printf("%d ",i);
	}
printf("\n");
}
//3)Write a C program to print your name, date of birth, and mobile number.
#include <stdio.h> 
 int main()  
  {
     printf("Name   : \n"); 
     printf("DOB    : \n"); 
     printf("Mobile :\n"); 
     return(0); 
  }
//4)C program to find factorial of a number
#include <stdio.h>
 
int main()
{
    int num,i;
    long int fact;
  
    printf("Enter an integer number: ");
    scanf("%d",&num);
  
    /*product of numbers from num to 1*/
    fact=1;
    for(i=num; i>=1; i--)
        fact=fact*i;
         
    printf("\nFactorial of %d is = %ld",num,fact);
      
    return 0;
}
//5) categorize the person according to their height.
#include <stdio.h>
void main()
{
    float PerHeight;
 
    printf("Input the height of the person (in centimetres) :");
    scanf("%f", &PerHeight);
    if (PerHeight < 150.0)
        printf("The person is Dwarf. \n");
    else if ((PerHeight >= 150.0) && (PerHeight < 165.0))
        printf("The person is  average heighted. \n");
    else if ((PerHeight >= 165.0) && (PerHeight <= 195.0))
        printf("The person is taller. \n");
    else
        printf("Abnormal height.\n");
}
