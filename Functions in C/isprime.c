#include <stdio.h>

int isprime(int);

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if(isprime(num))
    {
        printf("%d is a Prime Number\n", num);
    }
    else
    {
        printf("%d is Not a Prime Number\n", num);
    }
    return 0;
}

int isprime(int n)
{
    if(n <= 1) return 0;
    if(n <= 3) return 1;
    
    if(n % 2 == 0 || n % 3 == 0) return 0;
    
    for(int i = 5; i * i <= n; i += 6)
    {
        if(n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    
    return 1;
}
