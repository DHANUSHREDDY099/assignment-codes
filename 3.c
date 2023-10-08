// write a c program that calculates the total marks and percentage for a Student based on their scores in five different subjects, assuming a maximum score of 100 for each subject Input these subject scores using the keyboard.//
#include<stdio.h>
int main() {
	float s1,s2,s3,s4,s5,m1,m2,m3,m4,m5,total,grade;
	printf("Enter marks of all 5 subjects\n");
	scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);
	printf("Enter maximum marks can be obtained of all 5 subjects\n");
	scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
	if(m1!=(float)100) s1=(100*s1/m1);
	if(m2!=(float)100) s2=(100*s2/m2);
	if(m3!=(float)100) s3=(100*s3/m3);
	if(m4!=(float)100) s4=(100*s4/m4);
	if(m5!=(float)100) s5=(100*s5/m5);
	total = s1+s2+s3+s4+s5;
	printf("Total Marks is: %f\n", total);
	printf("Maximum Marks Could Be Obtained: 500 \n");
	printf("Your Grade is: %f Percent\n", total/5);
	return 0;
}