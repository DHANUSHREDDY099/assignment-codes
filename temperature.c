// information about the kind of weather for given temperature//
#include <stdio.h>
int main() 
{    
  int t;
  printf("Enter the temperature ( t ):  ");
  scanf("%d", &t);
	
    if (t >=50 ) 
        printf("IT IS '''TOOO HOTT OUTSIDE''', TAKE AN UMBRELLA WITH YOU ");
    else if (t >= 30 && t<=50) 
        printf("IT IS '''HOTT OUTSIDE''', WEAR A SUNGLASS ");
    else if (t>= 20 && t<= 30) 
        printf("THE CLIMATE IS GOOD ");
    else if (t<=20)
        printf("IT IS '''cool OUTSIDE''', WEAR A SWEATER ");
}            
