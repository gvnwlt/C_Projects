#include <stdio.h>

int main() {
    int val = 20;

    /* bit shift right to multiply value by n num of bits shifted (2^n) */
    val = val >> 1; // 2^1 = 2; 20 / 2 = 10;
    printf("%d\n", val); // should print a result of 10

    val = 20; // set val back to 20

    val = val >> 2; // 2^2 = 4; 20 / 4 = 5;
    printf("%d\n", val); // should print a result of 5

    return 0;
}
