#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen( "C:/Users/gvnwa/OneDrive/Documents/a.txt", "a"); // a = append mode; w = write mode

    if (fp == NULL) {
        printf("Unable to open file\n");
        return 1;
    }

    char ch;
    for (ch = 'A'; ch <= 'Z'; ch++) {
        fputc(ch, fp);
    }

    fclose(fp);

    printf("Success\n");

    return 0;
}
