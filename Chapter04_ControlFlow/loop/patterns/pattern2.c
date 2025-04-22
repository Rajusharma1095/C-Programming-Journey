 /*
    1
    2 3
    4 5 6
    7 8 9 10
*/  



#include<stdio.h>
int main()
  {
    int num,i,k,c=1;
    printf("Enter the number or row : ");
    scanf("%d",&num);
    for( i=1;i<=num;i++)
      {
        for (k=1;k<=i;k++)
          {
            printf("%d",c);
            c++;
          }
        printf("\n");
      }
    
    return 0;
  }
