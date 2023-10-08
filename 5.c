#include <stdio.h>
#include <string.h>

int main() {
    printf("\t\t\n *** Word Reverser ***\n\n");

    printf("Enter your word: \n");

    char word[64];

   
    scanf("%s", word);

    int length = strlen(word);

    printf("\nReversed Word: ");
    for (length = length - 1; length >= 0; length--) {
        printf("%c", word[length]);
    }

    return 0;
}
