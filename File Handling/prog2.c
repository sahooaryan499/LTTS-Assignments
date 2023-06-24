/*Write a C program to copy a file by considering the user option to handle the text case
-u, to change file content to Upper Case
-l, to change file content to Lower Case
-s, to change file content to Purely Upper Case
if no options are passed then it should be a normal copy

Example, say we have a file f1 with the following content
f1:
-----------------------
This is the file data
testing Case copy
application
-----------------------

./cp -s f1 f2
f2:
-----------------------
This Is The Tile Data
Testing Case Copy
Application
-----------------------

./cp -l f1 f3
f3:
-----------------------
this is the tile data
testing case copy
application
-----------------------

./cp -u f1 f4
f4:
-----------------------
THIS IS THE FILE DATA
TESTING CASE COPY
APPLICATION
-----------------------

./cp f1 f5
Should perform a normal copy*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void convertToUpperCase(FILE* sourceFile, FILE* destinationFile) {
    int ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(toupper(ch), destinationFile);
    }
}

void convertToLowerCase(FILE* sourceFile, FILE* destinationFile) {
    int ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(tolower(ch), destinationFile);
    }
}

void convertToPureUpperCase(FILE* sourceFile, FILE* destinationFile) {
    int ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        if (islower(ch)) {
            fputc(toupper(ch), destinationFile);
        } else {
            fputc(ch, destinationFile);
        }
    }
}

void performCopy(FILE* sourceFile, FILE* destinationFile) {
    int ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments.\n");
        printf("Usage: ./cp [option] source_file destination_file\n");
        printf("Options:\n");
        printf("  -u : Change file content to Upper Case\n");
        printf("  -l : Change file content to Lower Case\n");
        printf("  -s : Change file content to Purely Upper Case\n");
        return 1;
    }

    char* option = argv[1];
    char* sourceFileName = argv[2];
    char* destinationFileName = argv[3];

    FILE* sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }

    FILE* destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Failed to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    if (strcmp(option, "-u") == 0) {
        convertToUpperCase(sourceFile, destinationFile);
    } else if (strcmp(option, "-l") == 0) {
        convertToLowerCase(sourceFile, destinationFile);
    } else if (strcmp(option, "-s") == 0) {
        convertToPureUpperCase(sourceFile, destinationFile);
    } else {
        performCopy(sourceFile, destinationFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
