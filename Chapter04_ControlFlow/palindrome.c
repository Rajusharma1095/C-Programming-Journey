#include<stdio.h>
int main()
  {
    int num,i,rev=0,digit,temp;
    printf("Enter the number : ");
    scanf("%d",&num);
    temp=num;
    for( ;num!=0;num=num/10)
      {
        digit=num%10;
        rev=rev*10+digit;
      }
      if(temp==rev)
      {
    printf("\n Palindrome number");
      }
    else
        printf("\n Not a Palindrome number");
    
    return 0;
  }


//output :
 /*
Enter the number : 112
 Not a Palindrome number 
 */

/*

Enter the number : 212
 Palindrome number
 
*/


