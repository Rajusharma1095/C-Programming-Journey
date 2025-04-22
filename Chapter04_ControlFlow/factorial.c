#include<stdio.h>
int main()
  {
    int num ,i, fact=1;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(i=num;i>0;i--)
      {
        fact=fact*i;
      }
    printf("\n Number= %d Factorial=%d",num,fact);
    return 0;
  }

// output :
// Enter the number : 5
// Number= 5 Factorial=120
