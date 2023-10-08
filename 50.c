// print how to open,write and close a file in c 

#include <stdio.h>

int main() {
    // Creating and writing to a file
    FILE *fileWrite = fopen("example.txt", "w");
    if (fileWrite == NULL) {
        printf("Error opening the file for writing.\n");
        return 1;
    }

    fprintf(fileWrite, "This is an example text.\n");
    fprintf(fileWrite, "You can write more lines as needed.\n");
    
    fclose(fileWrite);

    // Reading from a file
    FILE *fileRead = fopen("example.txt", "r");
    if (fileRead == NULL) {
        printf("Error opening the file for reading.\n");
        return 1;
    }

    printf("Reading from the file:\n");
    char line[100];
    while (fgets(line, sizeof(line), fileRead) != NULL) {
        printf("%s", line);
    }

    fclose(fileRead);

    return 0;

}