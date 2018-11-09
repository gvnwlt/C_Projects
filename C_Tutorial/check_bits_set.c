#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int i, count = 0;

    for (i = 0; i < sizeof(int) * 8; i++) {
        if ((x & (1 << i)) == (1 << i))
            count++;
    }

    printf("Total set bits = %d\n", count);

    return 0;
}
