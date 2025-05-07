//square of any number 
#include <stdio.h>
int square(int);
int main()
  {
      int num, sq;
      printf("Enter a sumber for doing square");
      scanf("%d",&num);
      sq=square(num);
      printf("%d is square of %d",sq,num);
      return 0;
  }
  
  int square(int x)
     {
         int s;
         s=x*x;
         return s;
     }
