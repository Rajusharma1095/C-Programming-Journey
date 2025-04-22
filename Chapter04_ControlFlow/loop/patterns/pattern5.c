 /*
               1
             1   2
           1   2   3
         1   2   3   4
       1   2   3   4   5
     1   2   3   4   5   6

*/  



#include<stdio.h>
int main()
  {
    int num,i,k,j;
    printf("Enter the number or row : ");
    scanf("%d",&num);
    for( i=1;i<=num;i++)
      {
        for (k=num;k>=i;k--)
          {
            printf(" ");
          }
          for(j=1;j<=i;j++)
          {
              printf("   ");
          printf("%d",j);
          }
        printf("\n");
      }
    
    return 0;
  }
