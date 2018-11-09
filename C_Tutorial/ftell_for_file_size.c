#include <stdio.h>
#define SIZE 200

int main() {
    FILE *fp;
    double val;

    fp = fopen("C:/Users/gvnwa/OneDrive/Documents/data.bin", "rb");
    if (fp == NULL) {
        printf("Unable to open file\n");
        return 0;
    }
    long size;
    size - ftell(fp);
    printf("Size = %ld\n", size);

    fseek(fp, 0L, 2);
    printf("Size = %ld\n", size);

    int n = size / sizeof(double);

    printf("Size = %ld\n", size);

    fclose(fp);
    return 0;
}
