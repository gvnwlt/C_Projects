#include <stdio.h>
#define SIZE 200

int main() {
    FILE *fp;
    double data[] = {10.25, 5.54, 8.96, 12.45, 100.01};

    fp = fopen("C:/Users/gvnwa/OneDrive/Documents/data.bin", "wb");
    if (fp == NULL) {
        printf("Unable to open file\n");
        return 0;
    }

    int nObject = fwrite((void *)(data), sizeof(double), 5, fp);
    printf("Total elements written: %d\n", nObject);

    fclose(fp);
    return 0;
}
