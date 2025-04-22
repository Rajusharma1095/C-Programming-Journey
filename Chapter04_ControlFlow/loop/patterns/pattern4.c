 /*
           1
         1 2
       1 2 3
     1 2 3 4
   1 2 3 4 5

*/  



#include<stdio.h>
int main()
  {
    int num,i,k,j;
    printf("Enter the number or row : ");
    scanf("%d",&num);
    for( i=1;i<=num;i++)
      {
        for (k=1;k<=num-i;k++)
          {
            printf(" ");
          }
          for(j=1;j<=i;j++)
          {
          printf("%d",j);
          }
        printf("\n");
      }
    
    return 0;
  }
