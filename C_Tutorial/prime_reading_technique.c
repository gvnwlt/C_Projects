#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen( "C:/Users/gvnwa/OneDrive/Documents/a.txt", "r"); // a = append mode; w = write mode

    if (fp == NULL) {
        printf("Unable to open file\n");
        return 1;
    }

    /* prime reading technique */
    char ch;
    ch = fgetc(fp);

    while (!feof(fp)) {
        printf("%c", ch);
        ch = fgetc(fp);
    }

    fclose(fp);

    printf("\nSUCCESS\n");

    return 0;
}
