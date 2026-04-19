#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *src, *dest;
    char srcFile[100], destFile[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%s", srcFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);

    
    src = fopen(srcFile, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file '%s'\n", srcFile);
        exit(1);
    }

    
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot open destination file '%s'\n", destFile);
        fclose(src);
        exit(1);
    }

    
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");

    return 0;
}