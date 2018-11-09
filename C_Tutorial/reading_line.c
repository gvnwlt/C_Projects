#include <stdio.h>
#define SIZE 56

int main() {
    FILE *fp;

    fp = fopen("C:/Users/gvnwa/OneDrive/Documents/a.txt", "r");
    if (fp == NULL) {
        printf("Unable to open file\n");
        return 0;
    }

    char names[SIZE];
    while (1) {

        fgets(names, SIZE, fp);
        printf("%s", names);
        if (feof(fp))
            break;
    }


    fclose(fp);
    return 0;
}
