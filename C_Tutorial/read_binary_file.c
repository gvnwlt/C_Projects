#include <stdio.h>
#define SIZE 200

int main() {
    FILE *fp;
    double data[5];

    fp = fopen("C:/Users/gvnwa/OneDrive/Documents/data.bin", "rb");
    if (fp == NULL) {
        printf("Unable to open file\n");
        return 0;
    }

    int nObjects = fread((void *)data, sizeof(double), 5, fp);
    printf("Total read: %d\n", nObjects);

    int i;
    printf("Content of array: ");
    for (i = 0; i < 5; i++) {
        printf("%10.2lf", data[i]);
    }

    fclose(fp);
    return 0;
}
