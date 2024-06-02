/* Documentation
Name: PRASHANTH KB
Date: 2/09/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
{

   int i,count=0,num;
  printf("Enter the number:");
  scanf("%d",&num);
 for(i=0;i<32;i++)
 {
    if( (num & ( 1<<i ) ) ) 
    {
        count++;
    }
 }
  printf("The count of set bits of a %d is %d",num,count);
    return 0;
}

