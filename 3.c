//print whether the given character is vowel or consonant //
#include <stdio.h>

int main()

{

    char c;

    printf("Enter a character");

    scanf("%c", &c);

    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' ||c=='u')

    printf("Vowel");

    else

    printf("consonant");

    return 0;

}