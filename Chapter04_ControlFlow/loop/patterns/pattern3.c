 /*
    1
    1 2
    1 2 3
    1 2 3 4
*/  



#include<stdio.h>
int main()
  {
    int num,i,k;
    printf("Enter the number or row : ");
    scanf("%d",&num);
    for( i=1;i<=num;i++)
      {
        for (k=1;k<=i;k++)
          {
            printf("%d",k);
            
          }
        printf("\n");
      }
    
    return 0;
  }
