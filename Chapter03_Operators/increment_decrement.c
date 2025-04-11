#include <stdio.h>
int main() {
    int a = 5;
    printf("a: %d\n", a);
    printf("a++: %d\n", a++); // prints then increments
    printf("Now a: %d\n", a);
    printf("++a: %d\n", ++a); // increments then prints
    return 0;
}
