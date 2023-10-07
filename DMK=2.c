// switch program
// give the comment on there grade

#include<stdio.h>

int main () {

char grade = 'A';

switch (grade) {

case 'A':
printf("you did great");
break;

case 'B':
printf("you did very bad");
break;

case 'C':
printf("you failed");
break;
default:
printf("invalid grade");

}

}