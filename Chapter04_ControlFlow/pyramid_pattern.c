/*
    *
   ***
  *****
 *******
*********

*/

#include<stdio.h>
int main()
{
  int i,j,space,rows;
  printf("Enter the no of row for the pyramid : ");
  scanf("%d",&rows);
  for(i=1;i<= rows ; i++)
    {
    //spaces
    for(space=1; space <= rows-i ; space++)
      {
        printf(" ");
      }
  //stars
  for(j=1 ; j<=(2 * i-1); j++)
    {
      printf("*");
    }
  printf("\n");
   }
  return 0;
}
