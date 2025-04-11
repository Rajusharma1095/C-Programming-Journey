#include <stdio.h>
#define PI 3.14159
int main() {
    const int daysInWeek = 7;
    float radius = 5.0;
    float area = PI * radius * radius;
    printf("Days in a week: %d\n", daysInWeek);
    printf("Area of circle with radius %.2f is %.2f\n", radius, area);
    return 0;
}
