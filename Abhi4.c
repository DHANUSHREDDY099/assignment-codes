// write a 3×3 matrix of numbers from 1 to 9//

#include <stdio.h>
int main() 
{
int i,j;
i=0;
int k=1;
do{
j = 0;
do{
printf("%d  ", k++); 
j++;
} 
while (j < 3); 
printf("\n"); 
i++; 
}
while (i < 3); 
return 0;
}