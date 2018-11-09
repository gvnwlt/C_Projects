#include <stdio.h>

int main() {
    int val = 5;

    /* bit shift left to multiply value by n num of bits shifted (2^n) */
    val = val << 1; // 2^1 = 2; 2 * 5 = 10;
    printf("%d\n", val); // should print a result of 10

    val = 5; // set val back to 5

    val = val << 2; // 2^2 = 4; 4 * 5 = 20;
    printf("%d\n", val); // should print a result of 20

    return 0;
}
