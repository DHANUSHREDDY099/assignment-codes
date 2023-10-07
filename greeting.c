/*take the users name as input and greet them*/
#include<stdio.h>
int main()
{
    char name[50];
    printf("what is your name?\n");
    fgets(name, sizeof(name), stdin );
    printf("hello %s",name);
    return 0;
}