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

    fseek(fp, 2 * sizeof(double), SEEK_SET);
    fread((void *)&val, sizeof(double), 1, fp);
    printf("3rd rec: %.2lf\n", val);

    fseek(fp, -1 * sizeof(double), SEEK_END);
    fread((void *)&val, sizeof(double), 1, fp);
    printf("Last rec: %.2lf\n", val);

    fseek(fp, 1 * sizeof(double), SEEK_SET);
    fread((void *)&val, sizeof(double), 1, fp);

    printf("2nd rec: %.2lf\n", val);

    fclose(fp);
    return 0;
}
