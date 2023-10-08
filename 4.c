#include <stdio.h>
#include <math.h>

int main() 
{
double amount;
double principal= 1000; 
double rate = 0.05; 
unsigned int year;

printf("%4s%)2ls\n","year","amount on deposit");

for(year=1;year<=20;++year)
{
amount=principal*pow(1.0+rate,year);

printf("%4u%21.2f\n"),year,amount);
}
}
