/*Write a C program to copy a file using file operations*/
#include <stdio.h>

int main() {
    FILE *src_file, *dest_file;
    char src_file_name[100], dest_file_name[100];
    char ch;

    printf("Enter the source file name: ");
    scanf("%s", src_file_name);

    src_file = fopen(src_file_name, "r");

    if (src_file == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }

    printf("Enter the destination file name: ");
    scanf("%s", dest_file_name);

    dest_file = fopen(dest_file_name, "w");

    if (dest_file == NULL) {
        printf("Failed to create the destination file.\n");
        fclose(src_file);
        return 1;
    }

    while ((ch = fgetc(src_file)) != EOF) {
        fputc(ch, dest_file);
    }

    printf("File copied successfully.\n");

    fclose(src_file);
    fclose(dest_file);

    return 0;
}
