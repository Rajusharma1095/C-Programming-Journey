#include <stdio.h>
int main ()
{
  int a=1, b=0;
  printf("a && b : %d \n", a && b);
  printf("a && b : %d \n", a || b);
  printf("a && b : %d \n",  !a);
  return 0 ;
}

/*
---output---
  a && b : 0 
  a && b : 1 
  a && b : 0 
*/
