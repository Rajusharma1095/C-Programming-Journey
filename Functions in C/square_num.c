// Calculate the square of any number 
#include <stdio.h>
int square(int);

int main()
{
    int num, sq;
    printf("Enter a number for calculating its square: ");
    scanf("%d", &num);
    sq = square(num);
    printf("%d is the square of %d\n", sq, num);
    return 0;
}
  
int square(int x)
{
    int s;
    s = x * x;
    return s;
}
