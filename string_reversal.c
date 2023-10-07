/*take a string as an input and print its reverse without using string reversal
functions which are predefined (even spaces are inclided as a part of the string)*/
#include <stdio.h>
#include <string.h>
int main()
{
    char string[200];
    printf("enter the string :");
    fgets(string, sizeof(string), stdin);
    size_t len = strlen(string);
    if(len > 0 && string[len -1] == '\n')
    {
        string[len - 1] = '\0';
        len--;
    }
    char rev_string[200];
    for(int i = 0; i < len; i++)
    {
        rev_string[i] = string[len - i - 1];
    }
    rev_string[len] = '\0';
    printf("%s", rev_string);
    return 0;
}
