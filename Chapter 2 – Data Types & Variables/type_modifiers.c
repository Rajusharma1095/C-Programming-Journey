#include <stdio.h>

int main() {
    unsigned int positive = 100;
    int normal = -100;
    short int small = 32767;
    long int big = 1000000;

    printf("Unsigned int: %u\n", positive);
    printf("Signed int: %d\n", normal);
    printf("Short int: %d\n", small);
    printf("Long int: %ld\n", big);

    return 0;
}
